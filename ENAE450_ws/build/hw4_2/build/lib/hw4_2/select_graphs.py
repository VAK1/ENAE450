import rclpy
from geometry_msgs.msg import Twist
from turtlesim.srv import TeleportAbsolute, SetPen
from std_srvs.srv import Empty
import math
import time
from hw4_interface.srv import FunctionSelect  # Import the custom service

class GraphDrawer:
    def __init__(self):
        self.node = rclpy.create_node('graph_drawer')

        self.publisher = self.node.create_publisher(Twist, 'turtlesim1/turtle1/cmd_vel', 10)
        self.teleport_client = self.node.create_client(TeleportAbsolute, 'turtlesim1/turtle1/teleport_absolute')
        self.set_pen_client = self.node.create_client(SetPen, 'turtlesim1/turtle1/set_pen')
        self.clear_client = self.node.create_client(Empty, 'turtlesim1/clear')
        self.func_sel_service = self.node.create_service(FunctionSelect, 'select_function', self.select_function_callback)

    def select_function_callback(self, request, response):
        # Logic to select and draw the function based on request.function_id
        if request.function_id == 1:
            self.draw_sin_function()
        elif request.function_id == 2:
            self.draw_cubic_function()
        else:
            response.success = False
            response.message = "Invalid function_id. Please select 1 for sine or 2 for cubic."
            return response

        response.success = True
        response.message = "Function drawn successfully."
        return response

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

    def draw_sin_function(self):

        self.clear_screen()

        self.set_pen_state(True)
        self.teleport(0.0, math.sin(-5.5) + 5.5, 0.0)
        self.set_pen_state(False, 255, 0, 0, 2)
        sin_coordinates = self.generate_sin_coordinates(-5.5, 5.5, 0.1)
        for x, y in sin_coordinates:
            self.teleport(x + 5.5, y + 5.5, 0.0)

    def draw_cubic_function(self):
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
        future.result()

    def teleport(self, x, y, theta):
        request = TeleportAbsolute.Request()
        request.x = x
        request.y = y
        request.theta = theta
        future = self.teleport_client.call_async(request)
        future.result()
        time.sleep(0.1)

    def draw_straight_line(self, length):
        msg = Twist()
        msg.linear.x = length
        self.publisher.publish(msg)

    def clear_screen(self):
        request = Empty.Request()
        future = self.clear_client.call_async(request)
        future.result()
        time.sleep(1)  # Give some time for the screen to clear

    def shutdown(self):
        rclpy.shutdown()

def main(args=None):
    rclpy.init(args=args)
    graph_drawer = GraphDrawer()  # Initialize GraphDrawer
    
    try:
        rclpy.spin(graph_drawer.node)  # Keep your node active
    finally:
        graph_drawer.shutdown()
        rclpy.shutdown()

if __name__ == '__main__':
    main()

