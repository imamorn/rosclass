#include "robot.h"

Robot::Robot(){
	cout<<"Start Robot\n";
}

Robot::~Robot(){
	cout<<"Robot stopped\n";
}

void Robot::move_forward(int distance){
	cout<<"Robot moving forward: "<< distance << "\n";
}

void Robot::move_backward(int distance){
	cout<<"Robot moving backward: "<< distance << "\n";
}

void Robot::move_left(int distance){
	cout<<"Robot moving left: "<< distance << "\n";
}

void Robot::move_right(int distance){
	cout<<"Robot moving right: "<< distance << "\n";
}

