#ifndef __ROS_PACKAGE_H__
#define __ROS_PACKAGE_H__

#include <ros/ros.h>
#include <std_msgs/String.h>
#include <std_msgs/Empty.h>
#include <string>


class RosPackage
{
private:
  ros::NodeHandle nh;
  ros::NodeHandle pnh;

public:
    RosPackage();
    ~RosPackage();
};

#endif