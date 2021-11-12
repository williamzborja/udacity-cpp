#include <iostream>
#include <string>


using namespace std;

void printLn(string data){
	cout << data << "\n";
}

void increment(int* number){
	(*number)++;
}

void increment2(int &number){
	number++;
}

int main(){
	int a = 34;
	printLn("Before " + std::to_string(a));
	increment(&a);	
	printLn("After: " + std::to_string(a));
	printLn("======================");
	printLn("Before " + std::to_string(a));
	increment2(a);	
	printLn("After: " + std::to_string(a));
	
	return 0;

}

