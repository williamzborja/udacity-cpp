#include <iostream>

using namespace std;

class Gameboard {
    char gameSpace[4][4];

    int equalRow(char* row);
  public:
    Gameboard();
    void setGameSpace(int, int, char);
    char getGameSpace(int row,int column);
    void printInfo();
    int fourInRow();
};

// constructors
Gameboard::Gameboard(){
    for (size_t x = 0; x < 4; x++)
        for (size_t y = 0; y < 4; y++)
            gameSpace[x][y] =  '-';
}


// setters
void Gameboard::setGameSpace(int x, int y, char value){
    gameSpace[x][y] = value;
}

// getters
char Gameboard::getGameSpace(int row,int column){
    return gameSpace[row][column];
}

void Gameboard::printInfo(){
    size_t x, y;
    const char* delimiter = "==================\n";

    cout << delimiter;

    for (x = 0; x < 4; x++){
        for (y = 0; y < 4; y++)
            cout << gameSpace[x][y];
        cout << "\n";
    }
    cout << delimiter;
}

int Gameboard::equalRow(char* row){
    size_t count_x = 0, index;

    for (index = 0; index < 4; index++ )
        if (row[index] == 'x')
            count_x++;

    if (count_x == 4)
        return 1;
    return 0;
}

int Gameboard::fourInRow(){
    size_t col, row, count_x;

    for (col = 0; col < 4; col++)
        if ( equalRow(gameSpace[col]) )
            return 1;        
    return 0;
}
