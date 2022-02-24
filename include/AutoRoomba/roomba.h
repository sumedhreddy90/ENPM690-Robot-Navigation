#ifndef ROOMBA_INCLUDE__WALKER_H_
#define ROOMBA_INCLUDE__WALKER_H_

#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include "sensor_msgs/LaserScan.h"


class AutoRoomba {
 private:
  geometry_msgs::Twist twist;
  ros::NodeHandle nh;

 public:

  // Publishing cmd_vel topic
  ros::Publisher pub = nh.advertise < geometry_msgs::Twist > ("/cmd_vel", 10);
  // Subscribing to the lidar sensor
  ros::Subscriber sub = nh.subscribe("/scan", 10, &AutoRoomba::callback,
                                     this);

  void callback(const sensor_msgs::LaserScan::ConstPtr &pub_msg) {
    // Perform below action when robot senses obstacles
    if (pub_msg->ranges[0] < 0.5) {
      twist.linear.x = 0.0;
      twist.linear.y = 0.0;
      twist.linear.z = 0.0;
      twist.angular.x = 0.0;
      twist.angular.y = 0.0;
      twist.angular.z = 1.5;
      for (int k = 0; k < 5; k++)
        pub.publish(twist);
    }
    // Avoiding obstacles by rotating pose and angle
    else {
      twist.linear.x = 0.5;
      twist.linear.y = 0.0;
      twist.linear.z = 0.0;
      twist.angular.x = 0.0;
      twist.angular.y = 0.0;
      twist.angular.z = 0.0;
      pub.publish(twist);
    }
  }

};

#endif
