import rclpy
from geometry_msgs.msg import Twist
from turtlesim.srv import TeleportAbsolute, SetPen
import time

class TurtleController:
    def __init__(self, node_name, topic_name, service_name_teleport, service_name_set_pen):
        rclpy.init()
        self.node = rclpy.create_node(node_name)
        self.publisher = self.node.create_publisher(Twist, topic_name, 10)
        self.client_teleport = self.node.create_client(TeleportAbsolute, service_name_teleport)
        self.client_set_pen = self.node.create_client(SetPen, service_name_set_pen)

    def set_pen_state(self, is_off, r=255, g=0, b=0, width=2):
        request = SetPen.Request()
        request.off = is_off
        request.r, request.g, request.b, request.width = r, g, b, width
        future = self.client_set_pen.call_async(request)
        rclpy.spin_until_future_complete(self.node, future)

    def teleport_turtle(self, x, y, theta=0):
        request = TeleportAbsolute.Request()
        request.x, request.y, request.theta = float(x), float(y), float(theta)
        future = self.client_teleport.call_async(request)
        rclpy.spin_until_future_complete(self.node, future)

    def publish_message(self, msg, duration):
        start_time = time.time()
        while time.time() - start_time < duration:
            self.publisher.publish(msg)
            time.sleep(0.1)

    def draw_shape(self, shape_func):
        self.set_pen_state(False)  # Depress pen before moving
        shape_func()  # Draw the shape
        self.set_pen_state(True)  # Lift pen after drawing

    def draw_triangle(self):
        linear_speed = 1.0
        angular_speed = 2.06  # Adjust for a 120-degree turn

        move_msg = Twist()
        move_msg.linear.x = linear_speed
        turn_msg = Twist()
        turn_msg.angular.z = angular_speed

        for _ in range(3):
            self.publish_message(move_msg, 1.0)  # Move forward
            self.publish_message(turn_msg, 1.0)  # Turn

    def draw_square(self):
        move_msg = Twist()
        move_msg.linear.x = 2.0
        turn_msg = Twist()
        turn_msg.angular.z = 1.57  # Approximately 90 degrees

        for _ in range(4):
            self.publish_message(move_msg, 1.0)  # Move forward
            self.publish_message(turn_msg, 1.0)  # Turn

    def draw_circle(self):
        circle_msg = Twist()
        circle_msg.linear.x = 1.0  # Linear speed
        circle_msg.angular.z = 1.0  # Angular speed
        self.publish_message(circle_msg, 6.0)  # Adjust duration for full circle

    def draw_decagon(self):
        linear_speed = 1.0
        angular_speed = 0.628  # Adjust for 36-degree turn (360/10)

        move_msg = Twist()
        move_msg.linear.x = linear_speed
        turn_msg = Twist()
        turn_msg.angular.z = angular_speed

        for _ in range(10):
            self.publish_message(move_msg, 0.5)  # Move forward
            self.publish_message(turn_msg, 1.0)  # Turn

    def draw_shapes(self):
        # Draw triangle
        self.set_pen_state(True)  # Pen up
        self.teleport_turtle(3.0, 8.0)
        self.set_pen_state(False)  # Pen down
        self.draw_shape(self.draw_triangle)

        # Draw square
        self.teleport_turtle(7.0, 8.0)
        self.draw_shape(self.draw_square)

        # Draw decagon
        self.teleport_turtle(2.0, 2.0)
        self.draw_shape(self.draw_decagon)

        # Draw circle
        self.teleport_turtle(7.0, 2.0)
        self.draw_shape(self.draw_circle)

def main():
    controller = TurtleController(
        'draw_shapes',
        'turtlesim1/turtle1/cmd_vel',
        'turtlesim1/turtle1/teleport_absolute',
        'turtlesim1/turtle1/set_pen'
    )
    controller.draw_shapes()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

