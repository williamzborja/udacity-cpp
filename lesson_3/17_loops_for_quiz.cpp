/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/
#include <iostream>

using namespace std;

int main(){
    float total = 0;
    float tmp = 0;
    
    for (int i = 0; i < 5; i++){
        cin >> tmp;
        total += tmp;
    }
    cout << total << endl;
    cout << total / 5  << endl;
    return 0;
}

