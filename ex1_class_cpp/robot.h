#include <iostream>
using namespace std;

class Robot{	
	public:
		Robot(); // contructor
		~Robot();
		void move_forward(int distance);
		void move_backward(int distance);
		void move_left(int distance);
		void move_right(int distance);
};
