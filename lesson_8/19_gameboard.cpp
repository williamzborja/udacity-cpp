#include "gameboard.hpp"

int main()
{
    Gameboard game;

    game.setGameSpace(0,0,'x');
    game.setGameSpace(0,1,'x');
    game.setGameSpace(0,2,'x');
    game.setGameSpace(0,3,'y');
    game.setGameSpace(1,0,'x');
    game.setGameSpace(2,0,'x');
    game.setGameSpace(3,0,'x');
    game.setGameSpace(3,1,'x');
    game.setGameSpace(3,2,'x');
    game.setGameSpace(3,3,'y');

    if(game.fourInRow())
        cout<<"X got four in a row! \n\n";
    else
        cout<<"X did not get four in a row :(\n\n";

    return 0;
}
