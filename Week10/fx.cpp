// Brian Foster Coding 1 Fall 2026
// Functions

#include <iostream>
#include <string>
#include <vector>       // the easy to use array.
using namespace std;

// declaring and defining a function
void SayHello() {
    cout << "Hello.\n";
}

// declaring and defining a function
// this time with input parameters
void Say(string something) {
    cout << something << endl;  // end Line
}

void CoolSay(string something) {
    for(int i = 0; i < something.size(); i++) {
        cout << something[i] << " ";
    }
    cout << endl;       // end Line
}

// declaring and defining a function
// this one has two inputs and returns an int.
int Add(int numA, int numB) {
    return numA + numB;
}

// overloading functions
float Add(float numA, float numB) {
    return numA + numB;
}

bool AskYN(string question = "Keep playing?") {
    string input;
    while(true) {
        cout << question << " (y/n)\n";
        getline(cin, input);

        if(input == "y") {
            return true;
        }
        else if(input == "n") {
            return false;
        }
        else {
            cout << "Invalid input. Please type 'y' or 'n'.\n";
        }
    }
}

// die roll function
// display vector function
    // input parameter = array
    // return nothing = void
    // display all names with a loop

void DisplayVector(vector<string> vec) {
    // cout << "the first element in vec is " << vec[0] << ".\n";

    for(int i = 0; i < vec.size(); i++) {
        Say(vec[i]);
    }
}

void DisplayVector(vector<int> vec) {
    // cout << "the first element in vec is " << vec[0] << ".\n";

    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << "\n";
    }
}


// build me a function that triples a given number.
int Triple (int input) {
    return input * 3;
}

float Triple (float input) {
    return input * 3;
}

string Triple (string input) {
    return input + input + input;
}



int main() {
    cout << "Finally, functions!!\n";

    cout << "5 tripled is " << Triple(5) << endl;
    cout << "five tripled is " << Triple("five") << endl;

    // calling the function;
    SayHello();
    Say("What's up buddy?");
    Say("Not much, you?");
    CoolSay("AESTHETIC");

    cout << "2 + 5 = " << Add(2, 5) << endl;
    cout << "345 + -344 = " << Add(345, -344) << endl;

    if(AskYN()) {
        cout << "Let's start another round of the game!\n";
    }
    else {
        cout << "Thanks for playing!\n";
    }

    if(AskYN("Do you like green eggs and ham?")) {
        cout << "THATS WEIRD! YOU ARE WEIRD!!\n";
    }
    else {
        cout << "Yeah, i don't either.\n";
    }

    // Kids, don't try this at home.
    if(AskYN())     cout << "Let's go to the next level\n";
    else            cout << "Thanks for playing\n";


    // -----------------------------------
    vector<string> names = {"Finn", "Jake", "Marceline", "Simon"};
    DisplayVector(names);


    return 0;
}