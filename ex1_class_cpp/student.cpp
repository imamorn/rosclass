#include "student.h"

student::student(){
	this->student_id = 0;
	this->student_name = "";
	this->class_name = "";
}

student::student(int student_id, string student_name, string class_name){
	this->student_id = student_id;
	this->student_name = student_name;
	this->class_name = class_name;
}

student::~student(){
	cout<<"destructor\n";
}

void student::print(){
	cout<<"student id: "<< student_id << "\n";
	cout<<"student name: "<< student_name << "\n";
	cout<<"class name: "<< class_name << "\n";
}
