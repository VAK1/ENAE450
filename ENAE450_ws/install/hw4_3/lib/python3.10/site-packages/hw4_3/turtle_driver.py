# Import required ROS packages and messages
import rclpy
from rclpy.node import Node

# Import turtlesim services and messages for interacting with the turtlesim simulation
from turtlesim.srv import TeleportAbsolute, SetPen, Kill, Spawn
from turtlesim.msg import Pose

# Import standard services and geometry messages
from std_srvs.srv import Empty
from geometry_msgs.msg import Twist

# Import custom message and service for the turtle catching game
from hw4_interface.msg import Turtle, TurtleArray
from hw4_interface.srv import CatchTurtle

# Additional libraries for calculations and randomness
from math import pi, atan2, sqrt
import random

# Main class for the turtle controller node
class DemoPublisher(Node):

    def __init__(self):
        # Initialize the ROS node with a unique name
        super().__init__('hw4_3_ctrl')
        
        # Initialize variables to store the turtle's current pose and the current goal turtle
        self.pose = Pose()
        self.goal = Turtle()
        
        # Subscribe to the pose updates of the turtle and the alive turtles topic
        self.pose_subscription = self.create_subscription(Pose, 'turtlesim1/turtle1/pose', self.set_pose, 3)
        self.goal_subscription = self.create_subscription(TurtleArray, 'alive_turtles', self.set_goal, 3)
        
        # Publisher for commanding turtle's velocity
        self.twist_publisher = self.create_publisher(Twist, 'turtlesim1/turtle1/cmd_vel', 10)       
        
        # Clients for various turtlesim services to teleport, change pen settings, clear the screen, kill and spawn turtles
        self.tp_abs_client = self.create_client(TeleportAbsolute, 'turtlesim1/turtle1/teleport_absolute')
        self.pen_client = self.create_client(SetPen, 'turtlesim1/turtle1/set_pen')
        self.clear_client = self.create_client(Empty, 'turtlesim1/clear')
        self.kill_client = self.create_client(Kill, 'turtlesim1/kill')
        self.spawn_client = self.create_client(Spawn, 'turtlesim1/spawn')
        
        # Client for the custom service to catch a turtle
        self.catch_client = self.create_client(CatchTurtle, 'catch_turtle')
        
        # Timer for periodic execution of the main control loop
        self.timer = self.create_timer(0.1, self.timer_callback)
        
    # Callback for updating the turtle's current pose
    def set_pose(self, current_pose):
        # Check if the pose is within the valid range, otherwise teleport to a random valid location
        if 0 < current_pose.x < 11.08 and 0 < current_pose.y < 11.08:
            self.pose = current_pose
        else:
            self.tp_abs_callback(x=5.544445, y=5.544445, theta=(pi/2) * random.randint(0, 3))
    
    # Callback for setting the current goal turtle based on alive turtles topic
    def set_goal(self, goal_array):
        self.goal = goal_array.array[0] if goal_array.array else None

        if not self.goal:
            return

        min_distance = self.distance(self.goal)
        for turtle in goal_array.array[1:]:
            if self.distance(turtle) < min_distance:
                min_distance = self.distance(turtle)
                self.goal = turtle

    # Publishes velocity commands to move the turtle
    def twist_callback(self, lx=0, az=0):
        message = Twist()
        message.linear.x = lx
        message.angular.z = az
        self.twist_publisher.publish(message)
    
    # Teleports the turtle to an absolute position
    def tp_abs_callback(self, x, y, theta):
        request = TeleportAbsolute.Request(x=x, y=y, theta=theta)
        self.tp_abs_client.call_async(request)
    
    # Callbacks for other turtle control functions (pen setting, clearing screen, killing and spawning turtles) omitted for brevity
    
    # Calculate the distance to the goal
    def distance(self, goal):
        return sqrt((goal.x - self.pose.x) ** 2 + (goal.y - self.pose.y) ** 2)
    
    # Calculate the angular distance to the goal
    def angular_distance(self, goal):
        angle = atan2(goal.y - self.pose.y, goal.x - self.pose.x)
        angle = angle + (2 * pi) if angle < 0 < self.pose.theta else angle
        return angle - self.pose.theta
    
    # Timer callback to control the turtle's movement towards the goal
    def timer_callback(self):
        if self.goal:
            dist = self.distance(self.goal)
            angle = self.angular_distance(self.goal)
            
            # Decide on the angular velocity based on the angle to the goal
            angular_vel = 1.0 if angle > 0 else -1.0
            
            # Move towards the goal if not close enough, otherwise stop and send catch request
            if dist >= 0.1:
                self.twist_callback(lx=1.0, az=angular_vel)
            else:
                self.twist_callback(lx=0.0, az=0.0)
                self.get_logger().info('Turtle won.')
                request = CatchTurtle.Request()
                request.name = self.goal.name
                self.catch_client.call_async(request)

# Entry point for the ROS node
def main(args=None):
    rclpy.init(args=args)
    turtle_controller = DemoPublisher()
    rclpy.spin(turtle_controller)
    turtle_controller.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

