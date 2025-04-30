# Copyright 2020 Yutaka Kondo <yutaka.kondo@youtalk.jp>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch_ros.actions import Node
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, TimerAction
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import Command, LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node, PushRosNamespace
from launch_ros.parameter_descriptions import ParameterValue
from launch_ros.substitutions import FindPackageShare

import xacro


def generate_launch_description():

    # description_pkg = FindPackageShare('phantomx_reactor_arm_description')
    # namespace = LaunchConfiguration('namespace')
    # robot_name = LaunchConfiguration('robot_name')
    # xacro_file = LaunchConfiguration('xacro_file')
    # sim_mode = LaunchConfiguration('sim_mode')
    # ros2_control = LaunchConfiguration('ros2_control')
    # xacro_file = '/home/akinsantos/minipulator_ws/src/phantomx_reactor_arm_description/robots/phantomx_reactor_arm_wrist.urdf.xacro' #if wrist else phantomx_reactor_arm_no_wrist.urdf.xacro'


    robot_name = "phantomx_reactor_arm"
    package_name = robot_name + "_description"
    # rviz_config = os.path.join(get_package_share_directory(
    #     package_name), "launch", robot_name + ".rviz")
    robot_description = os.path.join(get_package_share_directory(
        package_name), "robots", "phantomx_reactor_arm_wrist.urdf.xacro")
    robot_description_config = xacro.process_file(robot_description)

    controller_config = os.path.join(
        get_package_share_directory(
            package_name), "config", "controllers.yaml"
    )

    return LaunchDescription([


        # DeclareLaunchArgument(
        #     name='namespace',
        #     description='set robot namespace',
        #     default_value='/',
        # ),

        # DeclareLaunchArgument(
        #     name='robot_name',
        #     description='set robot name',
        #     default_value='phantomx_reactor_arm',
        # ),

        # DeclareLaunchArgument(
        #     name='xacro_file',
        #     description='load xacro file',
        #     default_value=PathJoinSubstitution([
        #         description_pkg, 'robots', 'phantomx_reactor_arm_wrist.urdf.xacro'
        #     ]),
        # ),


        # DeclareLaunchArgument(
        #     name='rviz_config_file',
        #     description='A display config file (.rviz) to load',
        #     default_value=PathJoinSubstitution([
        #         description_pkg, 'config', 'description.rviz'
        #     ]),
        # ),

        # DeclareLaunchArgument(
        #     name='sim_mode',
        #     description='Enable simulation mode if true',
        #     choices=['true', 'false'],
        #     default_value='false',
        # ),

        # DeclareLaunchArgument(
        #     name='ros2_control',
        #     description='Use ros2_control if true',
        #     choices=['true', 'false'],
        #     default_value='false',
        # ),

        # PushRosNamespace(namespace),

        Node(
            package="controller_manager",
            executable="ros2_control_node",
            parameters=[
                # {"robot_description": robot_description_config.toxml()},
                controller_config,
            ],
            remappings=[
                ("~/robot_description", "/robot_description"),
                ],
            output="screen",
        ),

        Node(
            package="controller_manager",
            executable="spawner",
            arguments=["joint_state_broadcaster", "--controller-manager", "/controller_manager"],
            output="screen",
        ),

        # Node(
        #     package="controller_manager",
        #     executable="spawner",
        #     arguments=["velocity_controller", "-c", "/controller_manager"],
        #     output="screen",
        # ),

        Node(
            package="controller_manager",
            executable="spawner",
            arguments=["joint_trajectory_controller", "-c", "/controller_manager"],
            output="screen",
        ),

        Node(
            package="robot_state_publisher",
            executable="robot_state_publisher",
            name="robot_state_publisher",
            parameters=[
                {"robot_description": robot_description_config.toxml()}],
            output="screen",
        )

        # Node(
        #     package='robot_state_publisher',
        #     executable='robot_state_publisher',
        #     output='both',
        #     parameters=[{
        #         'robot_description': ParameterValue(
        #             Command([
        #                 'xacro ', xacro_file,
        #                 ' name:=', robot_name,
        #                 ' namespace:=', namespace,
        #                 ' ros2_control:=', ros2_control,
        #             ]),
        #             value_type=str,
        #         ),
        #     }],
        #     remappings=[
        #         ('/tf', 'tf'),
        #         ('/tf_static', 'tf_static')
        #     ],
        # )

        # Node(
        #     package="rviz2",
        #     executable="rviz2",
        #     name="rviz2",
        #     arguments=["-d", rviz_config],
        #     output="screen",
        # )

    ])