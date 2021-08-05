#include <iostream>
using namespace std;

class student{
	private:
		int student_id;
		string student_name;
		string class_name;
		
	public:
		student(); // contructor
		student(int student_id, string student_name, string class_name); // constructor
		~student();
		void print();
};
