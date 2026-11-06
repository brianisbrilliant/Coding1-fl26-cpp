// the definitions of the adventure functions

#include "adv.hpp"

// call this function at top of main
void setup() {
    srand(time(0));
}

int dieRoll(int max) {
    return rand() % max + 1;
}