#include <iostream>
#include <string>

using namespace std;

int main()
{
	int size = 1;

	switch (size){
	case 1:
		std::cout << "1\n";
	case 22:
		std::cout << "22\n";
	default:
		return 0;
	}

	
	

	std::cout << "Hello" << std::endl;
	return 0;
}
