// this is a comment
// Brian Foster Coding 1 Fall 2026

#include <iostream>     // for cout
#include <string>       // for string
using namespace std;    // for cout    

// the start of our program is 'int main()'
int main() {
    cout << "Hello Professor!\n";  // \n for new line
    cout << "second line.\n";

    // let's get user INPUT with cin (console-in)
    cout << "What is your name, player?\n";
    // we want to store what the user typed in a string variable
    string input;       // create a new variable named "input"
    getline(cin, input);    // this allows for spaces.
    cin >> input;       // get input from the user
    cout << "Hello " << input << ".\n";  // display their input

    // let's talk about varibles some more.
    int count = 10;

    // just like MadLibs
    cout << "The count is " << count << ".\n";

    // a while loop will keep running until it's condition is false
    // while 'count' is greater than zero... keep looping
    while(count > 0) {
        if(count % 2 == 0) {    // "if the remainder of count / 2 = 0"
            // cout << "even!\n";
        }
        else {
            cout << "Hello! " << count << "\n";
        }
        
        count = count - 1;      // subtract 1 from count.
    }

    int totalKeys = 0;
    cout << "Type 'key' to get a key.\n";
    cin >> input;

    if(input == "key") {
        cout << "You found a key!\n";
        totalKeys++;        // increment operator adds 1.
    }
    else {
        cout << "Sorry, you did it wrong. dummy.\n";
    }


    cout << "you have " << totalKeys << " keys.\n";

} // the end of main()