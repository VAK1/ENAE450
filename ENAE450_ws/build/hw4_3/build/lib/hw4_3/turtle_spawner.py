import rclpy
from rclpy.node import Node

from geometry_msgs.msg import Twist, Pose, PoseArray
from std_srvs.srv import Empty

# Import turtlesim services and messages for interaction
import turtlesim.srv as srv
import turtlesim.msg as msg

# Import custom messages and services
from hw4_interface.msg import Turtle, TurtleArray
from hw4_interface.srv import CatchTurtle

import random
from math import pi, atan2, sqrt, asin, acos

class DemoPublisher(Node):
    """
    A ROS 2 node to manage turtles in a turtlesim environment.
    This node handles spawning, tracking, and removing turtles in the simulation.
    """

    def __init__(self):
        super().__init__('hw4_3_spwn')

        # Initialize turtle tracking variables
        self.goal_count = 0
        self.goal_turtles = []
        
        # Service to catch a turtle
        self.catch_turtle = self.create_service(CatchTurtle, 'catch_turtle', self.catch_turtle_callback)
        
        # Client interfaces to turtlesim services
        self.clear_client = self.create_client(Empty, 'turtlesim1/clear')
        self.kill_client = self.create_client(srv.Kill, 'turtlesim1/kill')
        self.spawn_client = self.create_client(srv.Spawn, 'turtlesim1/spawn')
        
        # Publisher for alive turtles
        self.publisher = self.create_publisher(TurtleArray, 'alive_turtles', 10)
        
        # Spawn initial set of turtles
        for _ in range(random.randint(2, 4)):
            self.spawn_new_goal_callback()
        
        # Setup timers for spawning and updating turtles
        spawn_rate = 10
        self.spawn_timer = self.create_timer(spawn_rate, self.spawn_new_goal_callback)
        self.timer = self.create_timer(0.1, self.timer_callback)
    
    def catch_turtle_callback(self, request, response):
        """Callback to handle turtle catching requests."""
        self.kill_callback(request.name)
        self.goal_turtles.pop(0)
        self.timer_callback()
        response.success = True
        return response
    
    def clear_callback(self):
        """Clears the turtlesim screen."""
        request = Empty.Request()
        self.clear_client.call_async(request)
    
    def kill_callback(self, name):
        """Kills (removes) a turtle from the simulation."""
        request = srv.Kill.Request()
        request.name = name
        self.kill_client.call_async(request)
    
    def spawn_callback(self, x=None, y=None, theta=None, name=None):
        """Spawns a new turtle in the simulation."""
        request = srv.Spawn.Request()
        if x is not None:
            request.x = x
        if y is not None:
            request.y = y
        if theta is not None:
            request.theta = theta
        if name:
            request.name = name
        self.spawn_client.call_async(request)
    
    def spawn_new_goal_callback(self):
        """Spawns a new goal turtle at a random location."""
        new_x = 3.0 if self.goal_count == 0 else random.random() * 11
        new_y = 5.8 if self.goal_count == 0 else random.random() * 11
        new_name = "goal" + str(self.goal_count)
        self.goal_count += 1
        
        self.spawn_callback(x=new_x, y=new_y, name=new_name)
        
        new_turtle = Turtle()
        new_turtle.name = new_name
        new_turtle.x = new_x
        new_turtle.y = new_y
        self.get_logger().info(f'TURTLE NAME: {new_turtle.name}')
        
        self.goal_turtles.append(new_turtle)
    
    def timer_callback(self):
        """Publishes the list of alive turtles at a regular interval."""
        message = TurtleArray()
        message.array = self.goal_turtles
        self.publisher.publish(message)

def main(args=None):
    rclpy.init(args=args)
    hw4_3_turtle_spawner = DemoPublisher()
    rclpy.spin(hw4_3_turtle_spawner)
    hw4_3_turtle_spawner.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

