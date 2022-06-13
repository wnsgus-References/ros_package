#include <ros/ros.h>
#include "ros_package.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "ros_package");
  ros::Time::init();
  ROS_INFO("[%s] Start node",ros::this_node::getName().c_str());
  RosPackage ros;
  ros::spin();
}