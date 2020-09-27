#ifndef GAME_DATA_H
#define GAME_DATA_H
#include <iostream>

using namespace std;

class gameData{
    private:
        int win;
        int tie;
        int lose;

    public:
        gameData() {
            win = 0;
            tie = 0;
            lose = 0;
        }
        void setData(char);
        int getWin(void);
        int getTie(void);
        int getLose(void);
};

#endif