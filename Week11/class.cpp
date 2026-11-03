// Brian Foster Fall 2026 Coding 1
// Classes

#include <iostream>
#include <string>
using namespace std;

#include <chrono>
#include <thread>

// Classes are custom variables
// they have their own variables and functions
    // named "data members" 
    // and "member functions".
    // they also have constructors and destructors
        // which run when the object is created
        // or destroyed

class Robot {
public:
    string name;
    float charge;   // 0 to 1, as a percent

    // create a default constructor
    Robot() {
        cout << "\tA new robot appears!\n";
    }

    // create a constructor that accepts a name and charge.
    Robot(string givenName, float givenCharge) {
        cout << "\tA new robot appears!\n";
        name = givenName;
        charge = givenCharge;
        status();
    }

    void status() {
        cout << "Hello, my name is " << name << ".\n";
        cout << "I have " << charge * 100 << "% battery left.\n";
    }

    bool sleep() {
        charge += 0.2f;

        // clamp to ceiling
        if(charge > 1) {
            charge = 1;
        }

        this_thread::sleep_for(1s); 

        cout << "After some recharging,\nmy battery level is now ";
        cout << charge * 100 << "%.\n";

        return charge == 1;
    }

};  // don't forget the semi-colon at the end of the class


int main() {
    cout << "Let's learn about Classes!\n";

    Robot rob;  // creating an instance of our class
    // use dot syntax to set the data on the robot
    rob.name = "RB-1";
    rob.charge = .78f;

    // using dot syntax to get the data on the robot.
    cout << "We've just met " << rob.name << ".\n";
    rob.status();

    cout << "\nLet's make another robot!\n";
    Robot baymax("Baymax", 0.2f);

    baymax.sleep();

    // in-class test
    // build a while loop that charges up baymax until 
    // they're at 100% battery.
    while(baymax.charge < 1) {
        baymax.sleep();
    }

}