# Autonomous Roomba Vaccum Cleaner

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
---


## Introduction
![assignment](https://user-images.githubusercontent.com/24978535/155580788-65af8f48-e807-4e47-a269-6284b95633ee.png)



## Dependencies

This package has been tested in a system with following dependencies.
- Ubuntu 20.04 LTS
- ROS-noetic 

To install ROS noetic, Please follow instructions provided in the following link
http://wiki.ros.org/noetic/Installation/Ubuntu

## Build Instructions

1) To install ROS-noetic follow the steps mentioned in the official website (http://wiki.ros.org/noetic/Installation/Ubuntu)

2) After installing the above mentioned dependencies run the following commands to download this project.
```
source /opt/ros/noetic/setup.bash
mkdir -p ~/workspace/src
cd ~/workspace/src/
git clone https://github.com/sumedhreddy90/ENPM690-Robot-Navigation.git
cd ../ 
catkin_make
```

## Run Instructions

1) To launch the program: Manual Mode (Question 1)
```
cd ~/workspace/
source devel/setup.bash
roslaunch autoroomba robot.launch
rosrun autoroomba manual_mode
```
#### Output
```
Hola!!! Control Your Roomba Vaccum manually!
---------------------------
Moving around:
        w
   a    s    d
        x

w/x : increase/decrease linear velocity 
a/d : increase/decrease angular velocity 

space key, s : force stop

CTRL-C to quit
```


2) To launch the program: Auto pilot Mode (Question 2)
```
cd ~/workspace/
source devel/setup.bash
roslaunch autoroomba auto_mode.launch
```
## Output Video Recording

https://user-images.githubusercontent.com/24978535/155582095-eedbf3e6-226c-4cb9-b6b7-2cb16e4c3dbc.mp4



