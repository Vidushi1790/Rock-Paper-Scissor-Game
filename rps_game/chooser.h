#ifndef CHOOSER_H
#define CHOOSER_H
#include <iostream>

using namespace std;
#define MAX_COMP_PICKUP 6

class chooser{
    private:
        char computerSelection;
    public:
        chooser() {
            computerSelection = 'f';
        }
        char getRandomChooser(void);
        void setRandomChooser(void); 
};


#endif
