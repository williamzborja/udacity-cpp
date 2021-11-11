#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
#include <sstream>


using namespace std;


int main(){
	int target;
	std::string user;
	int guess = -1;

	srand(time(NULL));
	target = rand() % 100 + 1;

	while (guess != target){
		cout << "Guess a number 0 to 100: ";
		getline(cin, user);
		std::stringstream(user) >> guess;
		if (user == "q")
			return 0;

		if(guess > target)
		    std::cout<<"Your guess is too high\n";
		else if(guess < target)
		    std::cout<<"Your guess is too low\n";
		else
		    std::cout<<"You guessed the target!\n";

	}
	return 0;
}

