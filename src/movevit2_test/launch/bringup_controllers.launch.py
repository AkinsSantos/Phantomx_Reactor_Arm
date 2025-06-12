from launch import LaunchDescription
from launch_ros.actions import Node
import os
from ament_index_python.packages import get_package_share_directory
from launch.substitutions import Command


def generate_launch_description():
    robot_description_content = Command(['xacro ', os.path.join(
        get_package_share_directory('movevit2_test'), 'urdf', 'phantomx_reactor_wrist._moveit.urdf.xacro')])
    
    controller_yaml = os.path.join(
        get_package_share_directory('movevit2_test'),
        'config',
        'new_controllers.yaml'
    )

    control_node = Node(
        package='controller_manager',
        executable='ros2_control_node',
        parameters=[
            {'robot_description': robot_description_content},
            controller_yaml
        ],
        output='screen'
    )

    load_joint_state_broadcaster = Node(
        package='controller_manager',
        executable='spawner',
        arguments=['joint_state_broadcaster'],
        output='screen',
    )

    load_trajectory_controller = Node(
        package='controller_manager',
        executable='spawner',
        arguments=['arm_trajectory_controller'],
        output='screen',
    )

    return LaunchDescription([
        control_node,
        load_joint_state_broadcaster,
        load_trajectory_controller,
    ])
