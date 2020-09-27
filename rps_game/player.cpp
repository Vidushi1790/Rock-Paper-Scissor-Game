#include <iostream>
#include <unordered_set>
#include "player.h"

using namespace std;

void player::welcomeTag(void)
{
    // this function is going to be displayed after we welcome the user to our game
    // so we can find a name to address them with
    string player;
    cout << "Please enter your name to play the game!" << endl;
    cin >> player;
    setName(player);
    cout << endl << "-------------------------" << endl;
    cout <<"Welcome " << player << ". Good luck!" << endl;
    cout << "-------------------------" << endl;
}

void player::setName(string theName)
{
    name = theName;
}
 
string player::getName(void)
{
    return name;
}
 
void player::setPlayerChoice(char userChoice)
{
    this->userChoice = userChoice;
}

char player::getPlayerChoice(void)
{
    return userChoice;
}

void player::choice()
{
    // set containing all the possible valid choices that a user can make
    // later we'll check to see if the users chioce is in here, if it isn't
    // we'll ask them to resubmit a valid chioce
    unordered_set<char> validChoices;
    char choice;

    validChoices.insert('R');
    validChoices.insert('r');
    validChoices.insert('S');
    validChoices.insert('s');
    validChoices.insert('P');
    validChoices.insert('p');

    cout << "--------------------------------------------------" << endl;
    cout << "R/r = Rock" << endl;
    cout << "P/p = Paper" << endl;
    cout << "S/s = Scissors" << endl << endl;
    cout << getName() << "! please enter one of the letters about corresponding to the Choice!" << endl;
    cin >> choice;

    // make sure the user inputs a correct rock paper scissors choice
    while (validChoices.find(choice) == validChoices.end())
    {
        cout << "Invalid selection!, please enter a valid selection" << endl;
        cin >> choice;
    }
    setPlayerChoice(choice);
}
