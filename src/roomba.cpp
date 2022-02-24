#include "AutoRoomba/roomba.h"

int main(int argc, char **argv) {
  ros::init(argc, argv, "roomba_ros");
  AutoRoomba roomba;
  
  ros::spin();
  
  return 0;
}
