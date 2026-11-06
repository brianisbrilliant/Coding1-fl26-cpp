// header file for our robot class
// we will declare our functions in this header...
// we will define functions in 'robot.cpp'

// this keeps any code from adding this robot twice.
#pragma once

#include <iostream>
#include <string>
using namespace std;

class robot {
public:
    string name;
    int charge;

    // we define the default values in the declaration.
    robot(string n = "Rob", int c = 10);
    void status();
};
