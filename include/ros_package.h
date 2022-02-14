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

	ros::Subscriber sub_;
	ros::Publisher pub_;
    ros::Timer timer;

    int num;
    double publish_time;
    void topicCallback(const std_msgs::EmptyConstPtr& msgs);
    void timerCallback(const ros::TimerEvent& event);

public:
    RosPackage();
    ~RosPackage();
    void init();

};

#endif