#include "gameData.h"
#include <iostream>

using namespace std;

void gameData::setData(char result)
{
    // The setData only updates the specified variable when needed. Otherwise, if some bad data were to get in, it does nothing.
    switch(result)
    {
        case 'w':
            win++;
            break;
        case 't':
            tie++;
            break;
        case 'l':
            lose++;
            break;
        default:
            win = getWin();
            tie = getTie();
            lose = getLose();
            break;
    }
}


int gameData::getWin(void){
    return win;
}

int gameData::getTie(void){
    return tie;
}

int gameData::getLose(void){
    return lose;
}
