# Copyright [yyyy] [name of copyright owner]

# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at

# http://www.apache.org/licenses/LICENSE-2.0

# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import os
from ament_index_python.packages import get_package_share_directory

from sympy import true
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, OpaqueFunction
from launch_ros.substitutions import FindPackageShare
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import FindExecutable

# import xacro

def controllers_node_launch(context, *args, **kwargs):
    controllers_group = LaunchConfiguration('controllers_group').perform(context)
    nodes = []
    if controllers_group == 'trajectory':
        nodes.append(Node(
            package="controller_manager",
            executable="spawner",
            arguments=["joint_trajectory_controller", "-c", "/controller_manager"],
            output="screen",
        ))
    elif controllers_group == 'position':
        nodes.append(Node(
            package="controller_manager",
            executable="spawner",
            arguments=["position_controller", "-c", "/controller_manager"],
            output="screen",
        ))
    return nodes

def generate_launch_description():
    # Arguments values
    use_sim_time = LaunchConfiguration('use_sim_time', default=True)
    # with_gripper = LaunchConfiguration('with_gripper', default=True)
    is_real_launch = LaunchConfiguration('is_real_launch', default=False)

    # Arguments
    use_sim_time_arg = DeclareLaunchArgument(
        'use_sim_time',
        default_value=use_sim_time,
        description='If true, use simulated clock'
    )

    controllers_group_arg = DeclareLaunchArgument(
        'controllers_group',
        default_value='trajectory',
        description='Determine the set of controllers to be launched',
        choices=['trajectory', 'position']
    )

    # with_gripper_arg = DeclareLaunchArgument(
    #     'with_gripper',
    #     default_value=with_gripper,
    #     description='Determine if gripper will be used'
    # )
    
    # Gazebo related
    world_path = os.path.join(get_package_share_directory('open_manipulator_pro_gazebo'), 'worlds', 'wall_objects_done2.world')

    gazebo_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            PathJoinSubstitution([FindPackageShare('gazebo_ros'),
            # PathJoinSubstitution([FindPackageShare('ros_gz_sim'),
                'launch','gazebo.launch.py'])])
    )

    robot_description = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            [
                FindPackageShare("phantomx_reactor_arm_description"),
                '/launch',
                '/robot_description.launch.py'
            ]
        ),
            launch_arguments={
                'is_real_launch': is_real_launch
            }.items(),
    )

    robot_spawn_node = Node(
        package='gazebo_ros',
        # package='ros_gz_sim',
        executable='spawn_entity.py',
        arguments=['-topic', 'robot_description',
                   '-entity', 'robot'],
        output='screen'
    )

    declare_world_cmd = DeclareLaunchArgument(
        name='world',
        default_value=world_path,
        description='Full path to the world model file to load'
    )

    return LaunchDescription([
        robot_spawn_node,
        robot_description,
        # with_gripper_arg,
        use_sim_time_arg,
        controllers_group_arg,
        Node(
            package="controller_manager",
            executable="spawner",
            arguments=["joint_state_broadcaster", "--controller-manager", "/controller_manager"],
            output="screen",
        ),
        Node(
            package="controller_manager",
            executable="spawner",
            arguments=["velocity_controller", "-c", "/controller_manager"],
            output="screen",
        ),
        OpaqueFunction(function=controllers_node_launch),
        declare_world_cmd,
        gazebo_launch,
    ])
# ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# import os
# import xacro
# from ament_index_python.packages import get_package_share_directory

# from launch_ros.actions import Node
# from launch import LaunchDescription
# from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, OpaqueFunction, ExecuteProcess
# from launch_ros.substitutions import FindPackageShare
# from launch.launch_description_sources import PythonLaunchDescriptionSource
# from launch.substitutions import LaunchConfiguration, PathJoinSubstitution

# def controllers_node_launch(context, *args, **kwargs):
    
#     controllers_group = LaunchConfiguration('controllers_group').perform(context)
#     nodes = []
#     if controllers_group == 'trajectory':
#         nodes.append(Node(
#             package="controller_manager",
#             executable="spawner",
#             arguments=["joint_trajectory_controller", "-c", "/controller_manager"],
#             output="screen",
#         ))
#     elif controllers_group == 'position':
#         nodes.append(Node(
#             package="controller_manager",
#             executable="spawner",
#             arguments=["position_controller", "-c", "/controller_manager"],
#             output="screen",
#         ))
#     return nodes

# def generate_launch_description():
#     pkg_name = "phantomx_reactor_arm_description"

#     xacro_file = os.path.join(
#         get_package_share_directory(pkg_name),
#         "robots",
#         "phantomx_reactor_arm_wrist.urdf.xacro"
#     )

#     robot_description = xacro.process_file(xacro_file)

    
#     # Argumentos
#     use_sim_time = LaunchConfiguration('use_sim_time', default=True)
#     is_real_launch = LaunchConfiguration('is_real_launch', default=False)

#     use_sim_time_arg = DeclareLaunchArgument(
#         'use_sim_time',
#         default_value=use_sim_time,
#         description='If true, use simulated clock'
#     )

#     controllers_group_arg = DeclareLaunchArgument(
#         'controllers_group',
#         default_value='trajectory',
#         description='Determine the set of controllers to be launched',
#         choices=['trajectory', 'position']
#     )

#     # Caminho do mundo no Gazebo Fortress
#     world_path = os.path.join(get_package_share_directory('open_manipulator_pro_gazebo'), 'worlds', 'wall_objects_done2.sdf')

#     declare_world_cmd = DeclareLaunchArgument(
#         name='world',
#         default_value=world_path,
#         description='Full path to the world model file to load'
#     )

#     # Lançamento do Gazebo Fortress
#     gazebo_launch = Node(
#         package='ros_gz_sim',
#         executable='create',
#         arguments=['sim', '-r', 'world'],  # '-r' inicia a simulação automaticamente
#         output='screen'
#     )


#     gazebo_launch2 = IncludeLaunchDescription(
#         PythonLaunchDescriptionSource([
#                 PathJoinSubstitution([
#                     FindPackageShare('ros_gz_sim'), 'launch', 'gazebo.launch.py'
#                 ])])
#     )

#     load_joint_trajectory_controller = ExecuteProcess(
#         cmd=['ros2', 'control', 'load_controller', '--set-state', 'active', 
#              'joint_trajectory_controller'],
#              output='screen'
#     )

#     # robot_description = IncludeLaunchDescription(
#     #     PythonLaunchDescriptionSource(
#     #         [
#     #             FindPackageShare("phantomx_reactor_arm_description"),
#     #             '/launch',
#     #             '/robot_description.launch.py'
#     #         ]
#     #     ),
#     #     launch_arguments={
#     #         'is_real_launch': is_real_launch
#     #     }.items(),
#     # )

#     return LaunchDescription([
#         declare_world_cmd,
#         use_sim_time_arg,
#         controllers_group_arg,
#         gazebo_launch,  # Inicia o Gazebo Fortress
#         load_joint_trajectory_controller,
#         gazebo_launch2,
#         # robot_description,
#         Node(
#             package="controller_manager",
#             executable="spawner",
#             arguments=["joint_state_broadcaster", "--controller-manager", "/controller_manager"],
#             output="screen",
#         ),
#         Node(
#             package="controller_manager",
#             executable="spawner",
#             arguments=["velocity_controller", "-c", "/controller_manager"],
#             output="screen",
#         ),
#         Node(
#             package="robot_state_publisher",
#             executable="robot_state_publisher",
#             name="robot_state_publisher",
#             output="screen",
#             parameters=[ {"robot_description": robot_description.toxml()}],
#         ),
#         OpaqueFunction(function=controllers_node_launch),
#     ])
# //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# import os
# from ament_index_python.packages import get_package_share_directory
# from launch import LaunchDescription
# from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, OpaqueFunction, ExecuteProcess
# from launch_ros.substitutions import FindPackageShare
# from launch.launch_description_sources import PythonLaunchDescriptionSource
# from launch.substitutions import LaunchConfiguration, PathJoinSubstitution, FindExecutable
# from launch_ros.actions import Node



# def generate_launch_description():

#     package_name = "phantomx_reactor_arm_description"

#     # Gazebo related
#     world_path = os.path.join(get_package_share_directory("open_manipulator_pro_gazebo"), "worlds", "wall_objects_done2.world")

#     gazebo_launch = ExecuteProcess(
#         cmd=[FindExecutable(name='gz'), 'sim', '-r', world_path],
#         output='screen'
#     )

#     robot_description = IncludeLaunchDescription(
#         PythonLaunchDescriptionSource(
#             # [
#             #     FindPackageShare("phantomx_reactor_arm_description"),
#             #     '/launch',
#             #     '/phantomx_reactor_wrist_rviz_demo.launch.py'
#             # ]
#             [
#                 FindPackageShare("phantomx_reactor_arm_description"),
#                 '/launch',
#                 '/robot_description.launch.py'
#             ]
#         ),
#         # launch_arguments={'is_real_launch': is_real_launch}.items(),
#     )

#     # Publica a descrição do robô no tópico correto
#     robot_description_pub = Node(
#         package='ros_gz_sim',
#         executable='create',
#         arguments=['-topic', 'robot_description', '-name', 'robot'],
#         output='screen'
#     )

#     declare_world_cmd = DeclareLaunchArgument(
#         name='world',
#         default_value=world_path,
#         description='/home/akinsantos/minipulator_ws/src/open_manipulator_pro_gazebo/worlds/wall_objects_done2.sdf'
#     )

#     start_world= IncludeLaunchDescription (
#         PythonLaunchDescriptionSource(
#             world_path
#         )

#     )

#     controller_config = os.path.join(
#         get_package_share_directory(
#             package_name), "config", "controllers.yaml"
#     )

#     return LaunchDescription([
#         robot_description,
#         robot_description_pub,
#         declare_world_cmd,
#         gazebo_launch,

#         Node(
#             package="controller_manager",
#             executable="spawner",
#             arguments=["joint_state_broadcaster", "--controller-manager", "/controller_manager"],
#             output="screen",
#         ),
#         Node(
#             package="controller_manager",
#             executable="ros2_control_node",
#             parameters=[
#                 # {"robot_description": robot_description_config.toxml()},
#                 controller_config,
#             ],
#             remappings=[
#                 ("~/robot_description", "/robot_description"),
#                 ],
#             output="screen",
#         ),
#         # Node(
#         #     package="controller_manager",
#         #     executable="spawner",
#         #     arguments=["velocity_controller", "-c", "/controller_manager"],
#         #     output="screen",
#         # ),
#         Node(
#             package="controller_manager",
#             executable="spawner",
#             arguments=["joint_trajectory_controller", "-c", "/controller_manager"],
#             output="screen",
#         ),
#         # OpaqueFunction(function=controllers_node_launch),

#     ])

