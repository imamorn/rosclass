''' 
	Example in ROS class
	class Robot.py
'''

class Robot:
	def __init__(self):
			print("Start Robot")

	def move_forward(self, distance):
			print("Robot moving forward: " + str(distance) + " m")

	def move_backward(self, distance):
			print("Robot moving backward: " + str(distance) + " m")

	def move_left(self, distance):
			print("Robot moving left: " + str(distance) + " m")

	def move_right(self, distance):
			print("Robot moving right: " + str(distance) + " m")

	def __del__(self):
			print("Robot stopped")
