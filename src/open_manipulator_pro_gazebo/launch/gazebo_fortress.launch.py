import os
import launch
import launch_ros.actions
import launch_ros.substitutions
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import Command, PathJoinSubstitution, LaunchConfiguration
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import xacro

def generate_launch_description():
    # pkg_name = "phantomx_reactor_arm_description"
    # robot_desc_path2 = "/home/akinsantos/minipulator_ws/src/phantomx_reactor_arm_description/config/controllers.yaml"

    # controller_config = os.path.join(
    #     get_package_share_directory(
    #         pkg_name), "config", "controllers.yaml"
    # )
    # xacro_file = os.path.join(
    #     get_package_share_directory(pkg_name),
    #     "robots",
    #     "phantomx_reactor_arm_wrist.urdf.xacro"
    #     # "phantomx_macro_test.urdf.xacro"
    # )

    # robot_description = xacro.process_file(xacro_file)

    world_file_name = "empty.sdf"  # Arquivo do mundo Gazebo
    pkg_world = "open_manipulator_pro_gazebo"  # Arquivo do mundo Gazebo

    # Gazebo related
    world_path = os.path.join(get_package_share_directory('open_manipulator_pro_gazebo'), 'worlds', 'wall_objects_done2.world')

    # Diretórios
    world_path = os.path.join(get_package_share_directory(pkg_world), "worlds", world_file_name)
    
    # Argumentos
    use_sim_time = LaunchConfiguration("use_sim_time", default="true")

    start_gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('ros_gz_sim'), 'launch', 'gz_sim.launch.py')]),
        launch_arguments={"gz_args": world_path}.items(),
    )

    timer_ign = Node(
        package="ros_gz_bridge",
        executable="parameter_bridge",
        arguments=["/clock@rosgraph_msgs/msg/Clock[gz.msgs.Clock"],
        output="screen",
    )


    # Spawn do robô
        #Comentado para testar o Ign_demos  
    spawn_robot = Node(
        package="ros_gz_sim",
        executable="create",
        arguments=["-name", "my_robot", "-topic", "robot_description"],
        output="screen",
    )

        #To declare a diffetent World by terminal
    # declare_world_cmd = DeclareLaunchArgument(
    #     name='world',
    #     default_value=world_path,
    #     description='Full path to the world model file to load'
    # )

        #To publish the robot with gazebo
    # robot_state_publisher_node= Node(
    #     package="robot_state_publisher",
    #     executable="robot_state_publisher",
    #     name="robot_state_publisher",
    #     output="screen",
    #     parameters=[ {"robot_description": robot_description.toxml()}],
    # )

    return LaunchDescription([
        DeclareLaunchArgument("use_sim_time", default_value="true", description="Use simulation time"),
        timer_ign,
        # declare_world_cmd,
        start_gazebo,
        # robot_state_publisher_node,
        spawn_robot,

    ])


