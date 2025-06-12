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

def generate_launch_description():
    # package_name = "/home/akinsantos/minipulator_ws/src/open_manipulator_pro_grazebo"  # Nome do seu pacote
    world_file_name = "empty.sdf"  # Arquivo do mundo Gazebo
    pkg_world = "open_manipulator_pro_gazebo"  # Arquivo do mundo Gazebo

    # Gazebo related
    world_path = os.path.join(get_package_share_directory('open_manipulator_pro_gazebo'), 'worlds', 'wall_objects_done2.world')

    # Diretórios
    gazebo_pkg = get_package_share_directory("gazebo_ros")
    world_path = os.path.join(get_package_share_directory(pkg_world), "worlds", world_file_name)
    
    # Argumentos
    use_sim_time = LaunchConfiguration("use_sim_time", default="true")

    # Iniciar Gazebo Fortress com o mundo
    start_gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(gazebo_pkg, "launch", "gazebo.launch.py")),
    #     #Comentado por Hora
    #     # launch_arguments={"gz_args": world_path}.items(),
    )


    # start_gazebo = Node(
    #     package="ros_gz_sim",
    #     executable="gz_sim.launch.py",
    #     arguments=[world_path],
    #     output="screen",
    # )

    robot_spawn_node = Node(
        package='gazebo_ros',
        # package='ros_gz_sim',
        executable='spawn_entity.py',
        arguments=['-topic', 'robot_description',
                    '-entity', 'robot'],
        output='screen',
    )

    # spawn_robot = Node(
    #     package="gazebo_ros",
    #     executable="spawn_entity.py",
    #     arguments=[
    #         "-entity", "meu_robo",
    #         "-topic", "/robot_description",
    #         "-x", "0.0", "-y", "0.0", "-z", "0.5"  # Ajuste a altura se necessário
    #     ],
    #     output="screen",
    # )

    # declare_world_cmd = DeclareLaunchArgument(
    #     name='world',
    #     default_value=world_path,
    #     description='Full path to the world model file to load'
    # )


    return LaunchDescription([
        DeclareLaunchArgument("use_sim_time", default_value="true", description="Use simulation time"),
        # declare_world_cmd,
        robot_spawn_node,
        start_gazebo,
        # spawn_robot
    ])


