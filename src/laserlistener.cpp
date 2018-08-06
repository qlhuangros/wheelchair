#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"

void scanCallback(const sensor_msgs::LaserScan::ConstPtr& msg)
{
    ROS_INFO("I heard: [%s]", msg->data.c_str());
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "listener");
