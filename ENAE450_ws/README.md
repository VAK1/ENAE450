Name: Vikram Khandelwal

# ROS2 TurtleSim Projects

This repository contains three unique ROS2 packages designed for different purposes related to TurtleSim, an educational tool for learning about ROS (Robot Operating System) concepts. Each package aims to demonstrate various functionalities through interactive visual demonstrations using the TurtleSim environment.

## Package 1: hw4_1 (Geometry Figures)

- **Description**: This package allows the turtle to draw a series of geometric figures including a triangle, a square, a decagon, and a full circle.
- **Run Command**: `ros2 launch hw4_1 draw_shapes_launch.py`
- **Notes**: The pen is strategically set and unset to avoid traces between shapes. The package may require multiple attempts to run successfully due to a known issue. Terminate with `ctrl+C` and rerun if necessary.

## Package 2: hw4_2 (Trajectory Following)

- **Description**: Generates personalized graphs with the turtle simulating a line, a sine wave, and a cubic function sequentially. Each graph is cleared from the screen before drawing the next.
- **Run Command for Graph Generation**: `ros2 launch hw4_2 draw_graphs_launch.py k:=<scale> w:=<squeeze>`
- **Parameters**: `k` (scale) and `w` (squeeze) are customizable parameters for the graph shapes.
- **Extra Feature**: A service to select a specific function to graph. 
- **Run Command for Function Selection**: Run `ros2 launch hw4_2 select_graphs_launch.py` in one terminal pane. Then, in another, run `ros2 service call /select_function hw4_interface/srv/FunctionSelect "{function_id: <1 for sine or 2 for cubic>}"`.

## Package 3: hw4_3 (Turtle Following a.k.a Turtle War)

- **Description**: The protagonist turtle navigates to fend off the closest spawning turtles. The package demonstrates dynamic object interaction and response strategies within the TurtleSim environment.
- **Run Command**: `ros2 launch hw4_3 turtle_war_launch.py`
- **Gameplay**: Initially, 2-4 target turtles spawn as opponents. The protagonist turtle identifies and eliminates the closest target by colliding with them, removing them from the list of opponents. Collisions with walls will respawn the protagonist turtle at the center.

## Acknowledgments

A special thanks for the opportunity to engage in this educational project. The experience gained in developing these packages has been invaluable in understanding the intricacies of ROS2 and robotic simulations.

