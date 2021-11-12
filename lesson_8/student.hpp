#include <iostream>
#include <string>

using namespace std;


// struct arrange memory
typedef struct student
{
    const char* name;
    int id;
    int gradDate;
} student_t;


class Student{
	string name;
	int id;
	int gradDate;

	public:
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

