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
            package='hw4_3',
            executable='turtle_spawner',
            name='turtle_spawner'
        ),
        Node(
            package='hw4_3',
            executable='turtle_driver',
            name='turtle_controller'
        )
    ])
