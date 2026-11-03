// Brian Foster Week 12 Fall 2026
// Coding 1 - Files and headers

// write to a file first
// the read from a file

#include <fstream>      // output file stream, for writing to file
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// let's read from the file, into the vector....
vector<string> Read(string fileName = "file.txt") {
    // create a temporary vector of strings
    vector<string> temp;

    // create our file
    ifstream file(fileName);

    // gets a line of text from the file.
    string line;
    if(file.is_open()) {
        while(getline(file, line)) {
            // file >> line;               // store the line of text
            temp.push_back(line);       // add the line to the vector
        }

        file.close();
        return temp;        // return the vector of strings.
    }

    return temp;
}

// passing vector by copy because it is safer.
void Write(vector<string> vec, string fileName = "file.txt") {
    // create a "file" and open it.
    ofstream file(fileName);

    if(file.is_open()) {
        cout << "Writing vec to file.\n";
        for(int i = 0; i < vec.size(); i++ ) {
            file << vec[i] << endl;
        }
        file.close();

        return;         // this ends the function.
    }

    if(file.is_open()) {
        cout << "Let's write a name to file.\n";
        file << "Buttercup";    // adding a line to the file
        file.close();       // shows up in folder
        // this will over-write whatever other file is there.

        return;         // this ends the function.
    }
}

int main() {
    cout << "Hello world!\n";

    // create a vector of names.
    vector<string> names;

    names = Read("names.txt");

    if(names.size() == 0) {
        names.push_back("GTA IV");
        names.push_back("Ocarina of Time");
        names.push_back("Elder Scrolls IV");

        cout << "Wrote names to new file.\n";
    } else {
        cout << "here are your names:\n";
        // one by one, show all the names in the vector.
        for(int i = 0; i < names.size(); i++) {
            cout << names[i] << endl;
        }

        cout << "What name would you like to add?\n";
        string input;
        getline(cin, input);        // get another name from user
        names.push_back(input);     // add it to the vector
        // then let it write that additional name to file.
    }

    Write(names, "names.txt");

    cout << "Finished writing name to file.\n";


    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << i << "." << j << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < 3; i++) {
        file << robot.getName() << "," << robot.getCharge()
    }


    return 0;
}