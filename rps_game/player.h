#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>

using namespace std;

class player {
    private:
        string name;
        char userChoice;

    public:
        void welcomeTag(void);

        void setName(string);
        string getName(void);

        void setPlayerChoice(char);
        char getPlayerChoice(void);

        void choice(void);

};
 
#endif
