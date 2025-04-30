from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from launch.substitutions import PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():

    description_pkg = FindPackageShare('phantomx_reactor_arm_description')

    return LaunchDescription([

        DeclareLaunchArgument(
            name='rviz',
            description='Use RViz if true',
            choices=['true', 'false'],
            default_value='true',
        ),

        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                PathJoinSubstitution([
                    description_pkg,
                    'launch',
                    'phantomx_reactor_wrist_load_description.launch.py'
                ]),
            ]),
            # launch_arguments={'rviz': 'true'}.items(),
        ),

        Node(
            package='joint_state_publisher_gui',
            executable='joint_state_publisher_gui',
            output='both',
        ),
    ])
