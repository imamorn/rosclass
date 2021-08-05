'''
	Example ROS using python class
	dependency robot.py
'''

from robot import Robot

def main():
	obj = Robot()
	obj.move_forward(3)
	obj.move_backward(4)
	obj.move_left(5)
	obj.move_right(6)

if __name__ == "__main__":
	main()
