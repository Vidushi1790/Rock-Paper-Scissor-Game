#ifndef START_GAME_H
#define START_GAME_H
#include <iostream>

using namespace std;

class startGame{
    private:
        int rounds, maxRounds; 

    public:
        startGame() 
        {
            rounds = 0;
            maxRounds = 20;
        }
 
        void start(void);
        void validateRounds(int);
        
        void setRounds(int);
        int getRounds(void);

        void setMaxRounds(int);
        int getMaxRounds(void);
        void selectMaxRounds(void);
};

#endif
