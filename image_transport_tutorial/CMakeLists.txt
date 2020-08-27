cmake_minimum_required(VERSION 3.0.2)
project(image_transport_tutorial)





find_package(catkin REQUIRED COMPONENTS 
  roscpp
  rospy
  std_msgs
  sensor_msgs
  cv_bridge
  image_transport
 )
find_package(OpenCV)


catkin_package()







