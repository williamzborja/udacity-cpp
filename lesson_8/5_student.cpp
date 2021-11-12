#include <iostream>
#include "student.hpp"

using namespace std;

int main(){

	Student *s1 = new Student();
	student_t  s2 =  {"william", 1, 15};

	cout << sizeof(s2) << endl;
	s1->setName("william");
	s1->setId(1);
	s1->setGradDate(15);

	cout << "Size: ";
	cout << sizeof(*s1) << endl;

	s1->print();
	return 0;
}
