
## 1. Quick Start

You don't need a physical robot to run the following demos. 

### 1.1. Walking demo in RVIZ:

#### 1.1.1. Run the base driver:

    roslaunch dkitty_config bringup.launch rviz:=true

#### 1.1.2. Run the teleop node:

    roslaunch champ_teleop teleop.launch

If you want to use a [joystick](https://www.logitechg.com/en-hk/products/gamepads/f710-wireless-gamepad.html) add joy:=true as an argument.


### 1.2. SLAM demo:

#### 1.2.1. Run the Gazebo environment:

    roslaunch dkitty_config gazebo.launch 

#### 1.2.2. Run gmapping package and move_base:

    roslaunch dkitty_config slam.launch rviz:=true

To start mapping:

- Click '2D Nav Goal'.
- Click and drag at the position you want the robot to go.

   ![champ](https://raw.githubusercontent.com/chvmp/champ/master/docs/images/slam.gif)

- Save the map by running:

      roscd dkitty_config/maps
      rosrun map_server map_saver

### 1.3. Autonomous Navigation:

#### 1.3.1. Run the Gazebo environment: 

    roslaunch dkitty_config gazebo.launch 

#### 1.3.2. Run amcl and move_base:

    roslaunch dkitty_config navigate.launch rviz:=true

To navigate:

- Click '2D Nav Goal'.
- Click and drag at the position you want the robot to go.

   ![champ](https://raw.githubusercontent.com/chvmp/champ/master/docs/images/navigation.gif)


---
:exclamation: *This is not an official product from the robot's company/author.*