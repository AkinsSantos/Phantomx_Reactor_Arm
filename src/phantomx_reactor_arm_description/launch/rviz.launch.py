from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():

    use_sim_time = LaunchConfiguration('sim_mode')
    rviz_config_file = LaunchConfiguration('rviz_config_file')

    return LaunchDescription([

        DeclareLaunchArgument(
            name='sim_mode',
            description='Enable simulation mode if true',
            choices=['true', 'false'],
            default_value='false',
        ),

        DeclareLaunchArgument(
            name='rviz_config_file',
            description='A display config file (.rviz) to load',
            default_value='',
        ),

        Node(
            package='rviz2',
            executable='rviz2',
            output='both',
            parameters=[{'use_sim_time': use_sim_time}],
            arguments=['-d', rviz_config_file],
            remappings=[
                ('/clicked_point', 'clicked_point'),
                ('/goal_pose', 'goal_pose'),
                ('/initialpose', 'initialpose'),
                ('/tf', 'tf'),
                ('/tf_static', 'tf_static'),
            ],
        ),
    ])
