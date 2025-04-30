import launch
import launch_ros.actions

def generate_launch_description():
    return launch.LaunchDescription([
        launch_ros.actions.Node(
            package="pahtomx_reactor_arm_description",
            executable="mimic_controller.py",
            name="mimic_controller",
            output="screen",
        ),
    ])
