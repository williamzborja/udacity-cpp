#include <iostream>

using namespace std;


int main(){
	int a = 54;
	int* pointerToA = &a;

	cout << "a=" << pointerToA << "\n" ;
	cout << "Pointer Point to = " << *pointerToA << "\n";

	return 0;
}

