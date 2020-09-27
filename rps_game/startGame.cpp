#include "startGame.h"
#include <iostream>

using namespace std;

void startGame::setRounds(int rounds)
{
    this->rounds += rounds;
}

int startGame::getRounds(void)
{
    return rounds;
}

int startGame::getMaxRounds(void)
{
    return maxRounds;
}

void startGame::setMaxRounds(int maxRounds)
{
    this->maxRounds = maxRounds;
}

void startGame::validateRounds(int rounds)
{
    if(rounds == 0)
    {
        exit(0);
    }    
}

void startGame::start(void)
{
    // this function is the start scenario. it basically initializes some default values
    // and welcomes our player into the game
    cout << "-------------------------------------------------" << endl;
    cout << "  Welcome to the Rock, Paper, Scissors Game!  " << endl;
    cout << "-------------------------------------------------" << endl;
    int userRounds;
    cout << "How many rounds do you want to play (Enter number)?" << endl;
    cin >> userRounds;
    
    // while statement that ensures the user enters a valid round count (upto 20)
    while(userRounds > 20)
    {
        cout << "Please enter a valid value (1-20)!" << endl;
        cin >> userRounds;
    }
    
    cout << endl << endl << "You've chosen to play " << userRounds << " rounds." << endl << endl;

    //exit the game, if users enters the 0 rounds to play.
    validateRounds(userRounds);
    setMaxRounds(userRounds);
}
