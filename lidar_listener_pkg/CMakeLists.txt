
cmake_minimum_required(VERSION 3.0.2)
project(lidar_listener_pkg)


find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  sensor_msgs
)

catkin_package()


include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)


add_executable(LiDAR_listener src/lidar_listener.cpp)


add_dependencies(LiDAR_listener sensor_msgs_generate_messages_cpp)

target_link_libraries(LiDAR_listener
   ${catkin_LIBRARIES}
)
