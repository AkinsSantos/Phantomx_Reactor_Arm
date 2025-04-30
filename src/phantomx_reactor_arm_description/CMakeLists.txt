cmake_minimum_required(VERSION 3.22.1)
project(phantomx_reactor_arm_description)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


find_package(ament_cmake REQUIRED)
find_package(dynamixel_sdk REQUIRED)
find_package(rclcpp)
find_package(rclcpp_action)
find_package(rclcpp_components)
find_package(control_msgs)
find_package(trajectory_msgs)

add_executable(test_protocol1 src/test_protocol1.cpp)
ament_target_dependencies(test_protocol1 dynamixel_sdk)


add_executable(move_arm_client src/move_arm_client.cpp)
ament_target_dependencies(move_arm_client rclcpp rclcpp_action control_msgs trajectory_msgs)

install(
  DIRECTORY config launch meshes robots urdf src scripts
  DESTINATION share/${PROJECT_NAME}/
)
install(
  TARGETS move_arm_client #erect_position
  DESTINATION share/${PROJECT_NAME}/
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
