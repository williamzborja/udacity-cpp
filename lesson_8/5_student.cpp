#include <iostream>
#include "student.hpp"

using namespace std;

void printAny(){
	Student s1 = Student("william", 1, 15);
	student_t  s2 =  {"william", 1, 15};

	cout << "Struct Size: ";
	cout << sizeof(s2) << endl;

	cout << "Size Class: ";
	cout << sizeof(s1) << endl;
	s1.print();
}
int main(){
	printAny();
	return 0;
}
