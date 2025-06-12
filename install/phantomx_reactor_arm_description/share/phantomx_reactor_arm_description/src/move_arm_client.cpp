#include <rclcpp/rclcpp.hpp>
#include <control_msgs/action/follow_joint_trajectory.hpp>
#include <trajectory_msgs/msg/joint_trajectory.hpp>
#include <trajectory_msgs/msg/joint_trajectory_point.hpp>
#include <rclcpp_action/rclcpp_action.hpp>

class MoveArmClient : public rclcpp::Node {
public:
  using FollowJointTrajectory = control_msgs::action::FollowJointTrajectory;
  using GoalHandle = rclcpp_action::ClientGoalHandle<FollowJointTrajectory>;

  MoveArmClient() : Node("move_arm_client") {
    action_client_ = rclcpp_action::create_client<FollowJointTrajectory>(
        this, "/joint_trajectory_controller/follow_joint_trajectory");

    if (!action_client_->wait_for_action_server(std::chrono::seconds(5))) {
      RCLCPP_ERROR(this->get_logger(), "Servidor de ação não disponível!");
      return;
    }

    send_trajectory();
  }

private:
  rclcpp_action::Client<FollowJointTrajectory>::SharedPtr action_client_;

  void send_trajectory() {
    auto goal_msg = FollowJointTrajectory::Goal();
    goal_msg.trajectory.joint_names = {
        "shoulder_pitch_joint", "elbow_pitch_joint",
        "shoulder_pitch_joint_right", "elbow_pitch_joint_right"};

    trajectory_msgs::msg::JointTrajectoryPoint point;
    point.positions = {1.0, -0.5, -1.0, 0.5};  // Espelhamento manual
    point.time_from_start = rclcpp::Duration::from_seconds(2.0);
    goal_msg.trajectory.points.push_back(point);

    auto send_goal_options = rclcpp_action::Client<FollowJointTrajectory>::SendGoalOptions();
    send_goal_options.result_callback = [](const GoalHandle::WrappedResult & result) {
      if (result.code == rclcpp_action::ResultCode::SUCCEEDED) {
        RCLCPP_INFO(rclcpp::get_logger("move_arm_client"), "Movimento concluído!");
      } else {
        RCLCPP_ERROR(rclcpp::get_logger("move_arm_client"), "Erro no movimento.");
      }
    };

    action_client_->async_send_goal(goal_msg, send_goal_options);
  }
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<MoveArmClient>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
