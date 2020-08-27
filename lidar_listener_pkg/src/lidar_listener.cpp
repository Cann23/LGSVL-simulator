#include "ros/ros.h"

#include "sensor_msgs/LaserScan.h"

void laser_msg_Callback(const sensor_msgs::LaserScan::ConstPtr& scan)
{
  ROS_INFO("I heard: [%f]", scan->ranges[181]);
}                  

int main(int argc, char **argv)
{

  ros::init(argc, argv, "sick_listener"); 

  ros::NodeHandle n;

  ros::Subscriber sub = n.subscribe("points_raw", 811, laser_msg_Callback);

  ros::spin();

  return 0;

}













