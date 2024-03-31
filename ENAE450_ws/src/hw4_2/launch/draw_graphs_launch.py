from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument(
            'k',
            default_value='1.0',
            description='Scale factor for trajectories'),
        DeclareLaunchArgument(
            'w',
            default_value='1.0',
            description='Frequency for the sine function'),
        Node(
            package='turtlesim',
            namespace='turtlesim1',
            executable='turtlesim_node',
            name='sim'
        ),
        Node(
            package='hw4_2',
            executable='draw_graphs',
            name='turtle_control',
            parameters=[
                {'lin_vel': 0.5, 'k': LaunchConfiguration('k'), 'w': LaunchConfiguration('w')}
            ]
        )
    ])

