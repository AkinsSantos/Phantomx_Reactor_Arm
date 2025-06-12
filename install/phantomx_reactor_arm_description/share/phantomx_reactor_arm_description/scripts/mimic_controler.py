#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState

class MimicController(Node):
    def __init__(self):
        super().__init__("mimic_controller")
        self.subscription = self.create_subscription(
            JointState, "/joint_states", self.joint_state_callback, 10)
        self.publisher = self.create_publisher(JointState, "/joint_commands", 10)
        # self.timer = self.create_timer(0.01, self.publish_mimic_joints)
        # self.subscription = self.create_subscription(
        #     JointState, "/joint_commands", self.joint_command_callback, 10)


    def joint_state_callback(self, msg):
        new_msg = JointState()
        new_msg.header.stamp = self.get_clock().now().to_msg()
        new_msg.name = msg.name
        new_msg.position = list(msg.position)

        # Mapeia a junta principal para a mímica
        try:
            shoulder_idx = msg.name.index("shoulder_pitch_joint")
            elbow_idx = msg.name.index("elbow_pitch_joint")
            mimic_shoulder_idx = msg.name.index("shoulder_pitch_joint_right")
            mimic_elbow_idx = msg.name.index("elbow_pitch_joint_right")

            # Faz a mímica (espelhamento)
            new_msg.position[mimic_shoulder_idx] = -msg.position[shoulder_idx]
            new_msg.position[mimic_elbow_idx] = -msg.position[elbow_idx]

        except ValueError:
            self.get_logger().warn("Juntas esperadas não encontradas no tópico /joint_states")
            return
        
        self.publisher.publish(new_msg)

def main(args=None):
    rclpy.init(args=args)
    node = MimicController()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
