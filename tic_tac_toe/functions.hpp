/*Goal: Practice creating classes and functions. 
**Create a program that allows two users to 
**play a 4x4 tic-tac-toe game. 
*/
#include <fstream>
#include <iostream>

void getUserNames(string &, string &);
void printBlankBoard(string);
void printTheBoard(Board);
void printUserPrompt(string, char);
void printGameWinner(Board, string, string);
int  getUserResponse();
void checkResponse(Board&, char);
void writeTheBoard(Board);
