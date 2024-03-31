from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='turtlesim',
            namespace='turtlesim1',
            executable='turtlesim_node',
            name='sim'
        ),

        Node(
            package='hw4_1',
            executable='draw_shapes',
            name='turtle_control',
            parameters=[
                {'lin_vel': 0.5}
            ]
        )
    ])
