import rclpy
from geometry_msgs.msg import Twist
from turtlesim.srv import TeleportAbsolute, SetPen
from std_srvs.srv import Empty
import math
import time

class GraphDrawer:
    def __init__(self):
        rclpy.init()
        self.node = rclpy.create_node('graph_drawer')

        self.publisher = self.node.create_publisher(Twist, 'turtlesim1/turtle1/cmd_vel', 10)
        self.teleport_client = self.node.create_client(TeleportAbsolute, 'turtlesim1/turtle1/teleport_absolute')
        self.set_pen_client = self.node.create_client(SetPen, 'turtlesim1/turtle1/set_pen')
        self.clear_client = self.node.create_client(Empty, 'turtlesim1/clear')

    def generate_sin_coordinates(self, start, end, increment):
        coordinates = []
        x = start
        while x <= end:
            y = math.sin(x)
            coordinates.append((x, y))
            x += increment
        return coordinates

    def generate_cubic_coordinates(self, start, end, increment):
        coordinates = []
        x = start
        while x <= end:
            y = math.pow(x, 3)
            coordinates.append((x, y))
            x += increment
        return coordinates

    def draw_graph(self):
        # Draw a straight line as a baseline
        self.set_pen_state(True)
        self.teleport(0.0, 5.5, 0.0)
        self.set_pen_state(False, 255, 0, 0, 2)
        self.draw_straight_line(11.0)
        time.sleep(2)

        self.clear_screen()

        # Draw the sine wave
        self.set_pen_state(True)
        self.teleport(0.0, math.sin(-5.5) + 5.5, 0.0)
        self.set_pen_state(False, 255, 0, 0, 2)
        sin_coordinates = self.generate_sin_coordinates(-5.5, 5.5, 0.1)
        for x, y in sin_coordinates:
            self.teleport(x + 5.5, y + 5.5, 0.0)

        # Clear the screen before drawing the cubic function
        self.clear_screen()

        # Draw the cubic function
        self.set_pen_state(True)
        self.teleport(3.5, 0.0, 0.0)
        self.set_pen_state(False, 255, 0, 0, 2)
        cubic_coordinates = self.generate_cubic_coordinates(-2.0, 2.0, 0.1)
        for x, y in cubic_coordinates:
            self.teleport(x + 5.5, y + 5.5, 0.0)

    def set_pen_state(self, off, r=0, g=0, b=0, width=1):
        request = SetPen.Request()
        request.off = off
        request.r = r
        request.g = g
        request.b = b
        request.width = width
        future = self.set_pen_client.call_async(request)
        rclpy.spin_until_future_complete(self.node, future)

    def teleport(self, x, y, theta):
        request = TeleportAbsolute.Request()
        request.x = x
        request.y = y
        request.theta = theta
        future = self.teleport_client.call_async(request)
        rclpy.spin_until_future_complete(self.node, future)

    def draw_straight_line(self, length):
        msg = Twist()
        msg.linear.x = length
        self.publisher.publish(msg)

    def clear_screen(self):
        request = Empty.Request()
        future = self.clear_client.call_async(request)
        rclpy.spin_until_future_complete(self.node, future)
        time.sleep(1)  # Give some time for the screen to clear

    def shutdown(self):
        rclpy.shutdown()

def main(args=None):
    graph_drawer = GraphDrawer()
    graph_drawer.draw_graph()
    graph_drawer.shutdown()

if __name__ == '__main__':
    main()
