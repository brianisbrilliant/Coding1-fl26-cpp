// Brian Foster Coding 1 Fall 2026
// Adventure 2.0

// can you get it to compile and say hello?
#include <iostream>
#include <string>
#include <cstdlib>          // c standard library for rand()
#include <ctime>            // c time for srand(time(0))
using namespace std;        // comp sci says dont do this

// GLOBAL VARIABLES (accessible by any function)
int health = 10;
int totalGold = 0;
bool debug = true;          // set to false when shipping game


int DieRoll(int max = 6) {
    return rand() % max + 1;
}

void Encounter() {
    int playerRoll = DieRoll();
    int enemyRoll = DieRoll();
    string input = "";

    if(debug) {
        cout << "playerRoll = " << playerRoll << "\n";
        cout << "enemyRoll = " << enemyRoll << "\n";
    }

    cin >> input;

}

int main() {
    // setup
    srand(time(0));     // seed the random number generator

    cout << "Let's go adventuring!\n";

    while(health > 0) {
        Encounter();
    }

    return 0;
}