// this is where the definitions are for the robot class.

#include "robot.hpp"

// this is the definition for the constructor for the robot class.
// default values are not allowed here.
robot::robot(string n, int c) {
    name = n;
    charge = c;
    cout << "a new robot has been created.\n";
}

void robot::status() {
    cout << "My name is " << name << ", my charge is " << charge <<".\n";
}