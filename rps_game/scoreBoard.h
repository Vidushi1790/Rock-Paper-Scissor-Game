#ifndef SCORE_BOARD_H
#define SCORE_BOARD_H
#include <iostream>

using namespace std;

class scoreBoard {
    public:
        void displayResults(int, int, int);
        char calculateResults(char, char, string);
};

#endif
