#include <iostream>
#include "chooser.h" 

using namespace std;

char chooser::getRandomChooser(void)
{
    return computerSelection;
}

// AI selects a choice at random with all chances having an equal probability.
void chooser::setRandomChooser(void) 
{ 
    char random_chooser[MAX_COMP_PICKUP] = { 'R', 'r', 'P', 'p', 'S', 's'}; 
    computerSelection = random_chooser[rand() % MAX_COMP_PICKUP]; 
}
