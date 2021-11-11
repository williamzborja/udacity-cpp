#include <iostream>
#include <string.h>

using namespace std;

bool mkdir(string filename);

int main()
{
	cout << "Hello";
	return 0;
}

bool mkdir(string filename)
{
	string name = "touch " + filename;
	system(name.c_str());
	return true;
}
