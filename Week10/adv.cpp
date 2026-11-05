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


int BetterDieRoll(int max = 6, int min = 1) {
    return rand() % ((max - min) + 1) + min;
}

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
    if(playerRoll >= enemyRoll) {
        int gold = DieRoll(25);
        totalGold = totalGold + gold;       // 0 + 10
        totalGold += gold;                  // combined assignment operator +=
    } else {
        // subtract enemy roll from player health
        health -= enemyRoll;
    }

}

int main() {
    // setup
    srand(time(0));     // seed the random number generator

    // cout << BetterDieRoll(10, 5) << endl;
    // cout << BetterDieRoll(20, 10) << endl;
    // cout << BetterDieRoll(6, 3) << endl;
    // cout << BetterDieRoll(20, -20) << endl;

    for(int i = 0; i < 20; i++) {
        cout << BetterDieRoll(20, 10) << endl;
    }

    cout << "Let's go adventuring!\n";

    while(health > 0) {
        Encounter();
    }

    return 0;
}