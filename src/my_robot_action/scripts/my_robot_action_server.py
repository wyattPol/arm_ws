#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import Twist
from my_robot_action.action import MyRobot
from std_msgs.msg import Float32

class MyRobotActionServer(Node):
    def __init__(self):
        super().__init__('my_robot_action_server')

        self._action_server = ActionServer(
            self,
            MyRobot,
            'my_robot_action',
            execute_callback=self.execute_callback)

        self._laser_subscriber = self.create_subscription(
            LaserScan,
            '/laser_scan',
            self.laser_callback,
            10)

        self._cmd_vel_publisher = self.create_publisher(
            Twist,
            '/cmd_vel',
            10)

        self._current_distance_publisher = self.create_publisher(
            Float32,
            '/current_distance',
            10)

    def execute_callback(self, goal_handle):
        self.get_logger().info('Received goal request')

        # Extract goal parameters
        goal_distance = goal_handle.request.goal_distance
        timeout = goal_handle.request.timeout
        precision = goal_handle.request.precision

        # Variables for feedback
        current_distance = 0.0
        estimated_time = 0.0

        # Variables for result
        succeeded = False
        final_precision = 0.0
        total_time = 0.0

        start_time = self.get_clock().now()
        rate = self.create_rate(1)  # 1 Hz for simplicity, adjust as needed

        # Main action logic loop
        while current_distance < goal_distance and estimated_time < timeout:
            # Implement your robot control logic here
            # For simplicity, let's assume linear motion in x-axis

            cmd_vel_msg = Twist()
            cmd_vel_msg.linear.x = 0.5  # Adjust linear velocity as needed

            self._cmd_vel_publisher.publish(cmd_vel_msg)

            # Simulate updating the current distance (replace with actual distance logic)
            current_distance += 0.1

            # Publish current distance as feedback
            current_distance_msg = Float32()
            current_distance_msg.data = current_distance
            self._current_distance_publisher.publish(current_distance_msg)

            # Update estimated time remaining
            elapsed_time = (self.get_clock().now() - start_time).to_sec()
            estimated_time = max(0.0, timeout - elapsed_time)

            # Publish feedback
            goal_handle.publish_feedback(MyRobot.Feedback(
                current_distance=current_distance,
                estimated_time=estimated_time
            ))

            # Check if the goal is achieved
            if abs(current_distance - goal_distance) <= precision:
                succeeded = True
                final_precision = current_distance
                total_time = elapsed_time
                break

            # Sleep for a while
            rate.sleep()

        # Stop the robot (set velocity to 0)
        self._cmd_vel_publisher.publish(Twist())

        # Publish the final results
        result = MyRobot.Result(
            succeeded=succeeded,
            final_precision=final_precision,
            total_time=total_time
        )
        goal_handle.succeed(result)

        return result

    def laser_callback(self, msg):
        # Process laser scan data (you can add logic to use this data if needed)
        pass

def main(args=None):
    rclpy.init(args=args)
    node = MyRobotActionServer()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
