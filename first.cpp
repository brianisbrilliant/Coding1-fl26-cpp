// Brian Foster
// start with the code, then use the compiler errors to add the rest in.

#include <iostream>
#include <string>
#include <format>
using namespace std;

int main() {
    cout << "Hello Operator.\n";

    if(true) {
        cout << "This will always happen.\n";
    }
    else {
        cout << "This will never run.\n";
    }

    int counter = 10;
    while(counter-- > 0) {
        cout << "this should run like, ten times.\n";
    } 

    cout << "what's your name?\n";
    string input;
    cin >> input;

    cout << format("Hello {}", input);

    return 0;
}