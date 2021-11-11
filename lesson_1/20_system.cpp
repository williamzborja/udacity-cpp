#include <iostream>
#include <string.h>

using namespace std;

bool mkdir(string filename);

enum MONTH
{
	Jan,
	Feb,
	Mar,
	Apr,
	May,
	Jun,
	Jul,
	Aug,
	Sep,
	Oct,
	Nov,
	Dec
};

bool touch(const string& filename);


int main()
{
	touch("test");
	return 0;
}

bool touch(const string& filename)
{
	string name = "touch " + filename;
	system(name.c_str());
	return true;
}
