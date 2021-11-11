#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

void write_file(string file_name);
void read_file(string filename);

int main()
{
	string name = "test.txt";

	write_file(name);
	read_file(name);
	return 0;
}

void read_file(string filename)
{
	ifstream fileR(filename);
	string line;

	cout << "Start read file" << endl;
	cout << "===============\n";
	if (fileR.is_open())
		while (getline(fileR, line))
			cout << line << endl;
}

void write_file(string file_name)
{
	ofstream file(file_name, ios::ate);
	if (file.is_open())
	{
		file << "hello william\n";
		file.close();
	}
}
