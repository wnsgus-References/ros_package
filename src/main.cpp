#include "ros/ros.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	ros::init(argc, argv, "test_node");
	ros::Time::init();
	ros::Rate loop_rate(10);
 	while(ros::ok())
   	{ 
        ROS_INFO("Hello World");
		loop_rate.sleep();
		ros::spinOnce();
   	}
}