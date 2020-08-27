#include "ros/ros.h"
#include "sensor_msgs/Imu.h"


void chatterCallback(const sensor_msgs::Imu::ConstPtr& msg)
{
  ROS_INFO("Imu Seq: [%d]", msg->header.seq);
  ROS_INFO("Imu Angular Velocity x: [%f], y: [%f], z: [%f]", msg->angular_velocity.x,msg->angular_velocity.y,msg->angular_velocity.z);
  ROS_INFO("Imu Linear Acceleration x: [%f], y: [%f], z: [%f]", msg->linear_acceleration.x,msg->linear_acceleration.y,msg->linear_acceleration.z);
  ROS_INFO("Imu Orientation x: [%f], y: [%f], z: [%f], w: [%f]", msg->orientation.x,msg->orientation.y,msg->orientation.z,msg->orientation.w);
}

int main(int argc, char **argv)
{
  
  ros::init(argc, argv, "imu_listener");

  
  ros::NodeHandle n;

  
  ros::Subscriber sub = n.subscribe("imu_raw", 1000, chatterCallback);

  
  ros::spin();

  return 0;
}
