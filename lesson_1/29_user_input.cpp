#include <iostream>
#include <stdio.h>
#include <fstream>
#include <sstream>

using namespace std;

int main(){
    string input, name;

    int inches = 0;

    cin >> name;

    cout << name << endl;

    cout << "enter your inches\n";
    cin.ignore();
    getline(cin, input);

    stringstream(input) >> inches;
    cout << inches / 9 << endl;
    
    
    return 0;
}
 