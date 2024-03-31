Name: Vikram Khandelwal

# ROS2 TurtleSim Projects (Extra Credit Edition)

This repository showcases three advanced ROS2 packages utilizing TurtleSim for educational and demonstration purposes. Each package has been designed with unique features intended for extra credit, highlighting complex functionalities and creative uses of ROS concepts.

## Package 1: hw4_1 (Geometry Figures)

- **Description**: This package commands the turtle to draw intricate geometric figures: a triangle, a square, a decagon, and a full circle, showcasing advanced motion planning and drawing techniques.
- **Run Command**: `ros2 launch hw4_1 draw_shapes_launch.py`
- **Extra Credit**: The intelligent use of pen set and unset commands ensures clean transitions between shapes, presenting a challenge in precise control and planning.

## Package 2: hw4_2 (Trajectory Following)

- **Description**: Engage with personalized graph drawings! Experience the turtle drawing a line, a sine wave, and a cubic function, with each graph cleared before the next.
- **Run Command for Graph Generation**: `ros2 launch hw4_2 draw_graphs_launch.py k:=<scale> w:=<squeeze>`
- **Parameters**: `k` (scale) and `w` (squeeze) for custom graph shapes, a demonstration of parameterized programming in ROS.
- **Extra Credit**: 
  - **Customizable Parameters**: Implementing `k` and `w` as parameters for graph customization.
  - **Function Selection Service**: A special service allowing users to select the specific function to graph, showcasing the development and integration of custom ROS services.
  - **Run Command for Function Selection**: Run `ros2 launch hw4_2 select_graphs_launch.py` in one terminal, then `ros2 service call /select_function hw4_interface/srv/FunctionSelect "{function_id: <1 for sine or 2 for cubic>}"` in another.

## Package 3: hw4_3 (Turtle Following a.k.a Turtle War)

- **Description**: A thrilling simulation where the protagonist turtle must identify and fend off the closest spawning turtles, demonstrating dynamic target tracking and engagement in a continuously evolving environment.
- **Run Command**: `ros2 launch hw4_3 turtle_war_launch.py`
- **Extra Credit**:
  - **Dynamic Opponent Identification and Engagement**: Advanced algorithms for nearest opponent identification and engagement strategy.
  - **Auto-Respawn Mechanism**: Innovatively handling collisions with walls by auto-respawning the protagonist at the center, showcasing error handling and recovery strategies.

## Acknowledgments

Heartfelt thanks for this immensely educational project, offering a platform to explore and implement advanced ROS2 functionalities and custom features aimed at achieving extra credit. The learning experience has profoundly deepened my understanding of robotics simulation and software engineering principles in ROS.

