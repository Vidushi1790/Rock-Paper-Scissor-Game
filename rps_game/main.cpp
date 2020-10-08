/**
 *     Team : Group Name
 *     Assignment 3 # Command Line Rock-Paper-Scisor Game
 *     Department of Computer Engineering
 *     San Jose State University
 *     San Jose, CA  95192
 */

#include <iostream>
#include <cmath>
#include <time.h>
#include <cstdlib>
#include "startGame.h"
#include "scoreBoard.h"
#include "chooser.h"
#include "gameData.h"
#include "player.h"

using namespace std;

int main(){   
    // Create all our objects. 
    startGame game; 
    player player;
    scoreBoard scores;
    chooser computer;
    gameData data;
    char result = 'f';

    // RPS game starts here.
    game.start();
    player.welcomeTag();
    game.selectMaxRounds();

    // This will loop our game until all the rounds have passed.
    do 
    {
        player.choice();    
        computer.setRandomChooser();
        result = scores.calculateResults(player.getPlayerChoice(), computer.getRandomChooser(),player.getName());
        data.setData(result);
        scores.displayResults(data.getWin(), data.getTie(), data.getLose());
        game.setRounds(1);
    } while(game.getRounds() < game.getMaxRounds());
    
    return 0;
}