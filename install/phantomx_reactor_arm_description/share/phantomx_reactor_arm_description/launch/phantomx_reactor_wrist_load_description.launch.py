from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, TimerAction
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import Command, LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node, PushRosNamespace
from launch_ros.parameter_descriptions import ParameterValue
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():

    description_pkg = FindPackageShare('phantomx_reactor_arm_description')

    wrist = LaunchConfiguration('wrist')
    namespace = LaunchConfiguration('namespace')
    robot_name = LaunchConfiguration('robot_name')
    xacro_file = LaunchConfiguration('xacro_file')
    rviz = LaunchConfiguration('rviz')
    rviz_config_file = LaunchConfiguration('rviz_config_file')
    sim_mode = LaunchConfiguration('sim_mode')
    ros2_control = LaunchConfiguration('ros2_control')

    # xacro_file = '/home/akinsantos/minipulator_ws/src/phantomx_reactor_arm_description/urdf/phantomx_reactor_wrist.urdf.xacro' #if wrist else phantomx_reactor_arm_no_wrist.urdf.xacro'
    

    return LaunchDescription([

        DeclareLaunchArgument(
            name='wrist',
            description='Enables wrist if true',
            choices=['true', 'false'],
            default_value='true',
        ),

        DeclareLaunchArgument(
            name='namespace',
            description='set robot namespace',
            default_value='/',
        ),

        DeclareLaunchArgument(
            name='robot_name',
            description='set robot name',
            default_value='phantomx_reactor_arm',
        ),

        DeclareLaunchArgument(
            name='xacro_file',
            description='load xacro file',
            default_value=PathJoinSubstitution([
                description_pkg, 'robots', 'phantomx_reactor_arm_wrist.urdf.xacro'
            ]),
        ),

        DeclareLaunchArgument(
            name='rviz',
            description='Use RViz if true',
            choices=['true', 'false'],
            default_value='false',
        ),

        DeclareLaunchArgument(
            name='rviz_config_file',
            description='A display config file (.rviz) to load',
            default_value=PathJoinSubstitution([
                description_pkg, 'config', 'description.rviz'
            ]),
        ),

        DeclareLaunchArgument(
            name='sim_mode',
            description='Enable simulation mode if true',
            choices=['true', 'false'],
            default_value='false',
        ),

        DeclareLaunchArgument(
            name='ros2_control',
            description='Use ros2_control if true',
            choices=['true', 'false'],
            default_value='false',
        ),

        PushRosNamespace(namespace),

        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            output='both',
            parameters=[{
                'use_sim_time': sim_mode,
                'robot_description': ParameterValue(
                    Command([
                        'xacro ', xacro_file,
                        ' name:=', robot_name,
                        ' namespace:=', namespace,
                        ' ros2_control:=', ros2_control,
                        ' use_sim_time:=', sim_mode,
                    ]),
                    value_type=str,
                ),
            }],
            remappings=[
                ('/tf', 'tf'),
                ('/tf_static', 'tf_static')
            ],
        ),
        # Node(
        #     package='joint_state_publisher_gui',
        #     executable='joint_state_publisher_gui',
        #     output='both',
        # ),


        TimerAction(
            period=2.0,
            actions=[
                IncludeLaunchDescription(
                    PythonLaunchDescriptionSource([
                        PathJoinSubstitution([
                            description_pkg, 'launch', 'rviz.launch.py'
                        ]),
                    ]),
                    launch_arguments={
                        'rviz_config': rviz_config_file,
                    }.items(),
                    condition=IfCondition(rviz),
                ),
            ],
        ),
    ])
