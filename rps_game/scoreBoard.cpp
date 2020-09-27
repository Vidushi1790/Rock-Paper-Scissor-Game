#include "scoreBoard.h"
#include <iostream>

using namespace std;


void scoreBoard::displayResults(int w, int t, int l)
{
    // this function contains the scoreboard of our game that will be displayed 
    // to the user everytime they finish playing a round
    cout << "-----------------------------------" << endl;
    cout << " ******** Score Board ********"<< endl;
    cout << "-----------------------------------" << endl;
    cout << "Number of Wins: " << w << endl;
    cout << "Number of Ties: " << t << endl;
    cout << "Number of Losses: " << l << endl;
    cout << "Currently you've played: " << w + t + l << " rounds." << endl << endl;
}

char scoreBoard::calculateResults(char playerInput, char computerInput, string player_name)
{
    // this function takes in a player and computer input, and then calculates
    // the winner or loser of each situation
    // i.e. userInput = rock & computerInput = rock, the output will be tie
    switch (playerInput)
    {
    case 'R':
    case 'r':
        if(computerInput == 'R' || computerInput == 'r')
        {
            cout << "It's a Tie! between " << player_name << " and computer's choice" << endl;
            return 't';
        }
        else if(computerInput == 'P' || computerInput == 'p'){
            cout << "Computer wins, Computer Chose Paper" <<endl;
            return 'l';
        }
        else if(computerInput == 'S' || computerInput == 's'){
            cout << player_name << " wins!, Computer Chose Scissors" <<endl;
            return 'w';
        }
        break;
    case 'P':
    case 'p':
        if(computerInput == 'R' || computerInput == 'r'){
            cout << player_name << " wins!, Computer Chose Rock" <<endl;
            return 'w';
        }
        else if(computerInput == 'P' || computerInput == 'p'){
            cout << "It's a Tie! between " << player_name << " and computer's choice ---" << endl;
            return 't';
         }
        else if(computerInput == 'S' || computerInput == 's'){
            cout << "Paper is cut by Scissors the computer wins!" << endl;
            return 'l';
         }    
        break; 
    case 'S':
    case 's':
        if(computerInput == 'R' || computerInput == 'r'){
                cout << "Scissors are crushed by Rock computer wins!" << endl;
                return 'l';
            }
        else if(computerInput == 'P' || computerInput == 'p'){
                cout << player_name << " wins!, Computer Chose Paper" <<endl;
                return 'w';
            }
        else if(computerInput == 'S' || computerInput == 's'){
                cout << "It's a Tie! between " << player_name << " and computer's choice" << endl;
                return 't';
            }        
        break;
    default:
        cout << "You Selection is out of the Game's Scope" << endl;
        return 'f';
        break;
    }
    return 'f';
}
