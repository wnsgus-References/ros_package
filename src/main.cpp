#include <ros/ros.h>
#include "ros_package.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "ros_package");
  ros::Time::init();
  RosPackage ros;
  ros::spin();
}