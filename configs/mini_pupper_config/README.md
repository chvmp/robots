Currently this only works in a virtual environment.

## 1. Quick Start

You don't need a physical robot to run the following demos.

### 1.1. Walking demo in RVIZ:

#### 1.1.1. Run the base driver:

    ros2 launch mini_pupper_config bringup.launch.py rviz:=true

#### 1.1.2. Run the teleop node:

    ros2 launch champ_teleop teleop.launch.py

### 1.2. SLAM demo:

#### 1.2.1. Run the Gazebo environment:

    ros2 launch mini_pupper_config gazebo.launch.py 

#### 1.2.2 Run [Nav2](https://navigation.ros.org/)'s navigation and [slam_toolbox](https://github.com/SteveMacenski/slam_toolbox):
   
    ros2 launch mini_pupper_config slam.launch.py rviz:=true 

To start mapping:

- Click '2D Nav Goal'.
- Click and drag at the position you want the robot to go.

    ![champ](https://raw.githubusercontent.com/chvmp/champ/master/docs/images/slam.gif)

- Save the map by running:
      
    cd mini_pupper_config/maps
    ros2 run nav2_map_server map_saver_cli -f new_map

After this, you can use the new_map to do pure navigation.

### 1.3. Autonomous Navigation:

#### 1.3.1. Run the Gazebo environment:

    ros2 launch mini_pupper_config gazebo.launch.py

#### 1.3.2 Run [Nav2](https://navigation.ros.org/):

    ros2 launch mini_pupper_config navigate.launch.py rviz:=true

To navigate:

- Click '2D Nav Goal'.
- Click and drag at the position you want the robot to go.

    ![champ](https://raw.githubusercontent.com/chvmp/champ/master/docs/images/navigation.gif)

## All below is not yet ported for ROS2

#### 1.4.1 Spawning multiple robots in Gazebo

Run Gazebo and default simulation world:

    roslaunch champ_gazebo spawn_world.launch

You can also load your own world file by passing your world's path to 'gazebo_world' argument:

    roslaunch champ_gazebo spawn_world.launch gazebo_world:=<path_to_world_file>

Spawning a robot:

    roslaunch mini_pupper_config spawn_robot.launch robot_name:=<unique_robot_name> world_init_x:=<x_position> world_init_y:=<y_position>

- Every instance of the spawned robot must have a unique robot name to prevent the topics and transforms from clashing.

---

:exclamation: _This is not an official product from the robot's company/author._
