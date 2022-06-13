#include "ros_package.h"

RosPackage::RosPackage():pnh("~")
{
  init();
}

RosPackage::~RosPackage()
{

}

void RosPackage::init()
{
  num = 0;
  pnh.param("publish_time",publish_time,1.0);
  sub_ = nh.subscribe<std_msgs::Empty>(ros::this_node::getName()+"/input", 1, &RosPackage::topicCallback, this);
  pub_  = nh.advertise<std_msgs::String>(ros::this_node::getName()+"/output", 1);
  timer = nh.createTimer(ros::Duration(publish_time),&RosPackage::timerCallback,this);
}

void RosPackage::topicCallback(const std_msgs::EmptyConstPtr& msgs)
{
  num ++;
}

void RosPackage::timerCallback(const ros::TimerEvent& event)
{
  std_msgs::String msg;
  std::stringstream ss;
  ss << "I get " << num <<" topic";
  msg.data = ss.str();
  ROS_INFO("[%s] %s",ros::this_node::getName().c_str(),msg.data.c_str());
  pub_.publish(msg);
}