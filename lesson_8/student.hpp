#include <iostream>
#include <string>

using namespace std;

typedef struct student{
    const char* name;
    int id;
    int gradDate;
} student_t;


class Student{
	string name;
	int id;
	int gradDate;

	public:
		Student();
		Student(string name, int id, int grade);
		~Student();
		void setName(string name){
            this->name = name;
        }
		void setId(int id){
            this->id = id;
        }
		void setGradDate(int gradDate){
            this->gradDate = gradDate;
        }

		string getName();
		int getId();
		int getGradDate();
		void print();

		
};

Student::Student(){
	cout << "Build me !!\n";
}

Student::Student(string name, int id, int grade){
	this->name = name;
	this->id = id;
	this->gradDate = grade;
}

Student::~Student(){
	cout << "You destroy me :(\n";
}

string Student::getName(){
	return name;
}

int Student::getId(){
	return id;
}

int Student::getGradDate(){
	return gradDate;
}

void Student::print(){
    cout << "Student: " << this << endl;
    cout << "Name: " << name << endl;
    cout << "Id: " << id << endl;
    cout << "Grad Date: " << gradDate << endl;
}
