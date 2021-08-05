#include "student.h"
#include "robot.h"
#include <stdio.h>

int main(){

	Robot obj;
	obj.move_forward(3);
	obj.move_backward(4);;
	obj.move_left(5);
	obj.move_right(6);

/*	
	student std1;
	student std2(0,"xxx","ros");

	std1.print();
	std2.print();
*/

	return 0;
}

