// brian foster fall 2026 coding 1
// creating a class in class

#include <iostream>
#include <string>
// #include <chrono>
// #include <thread>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

vector<string> planets = {"Earth", "Alderaan", "Sol", "Mars"};
enum threats {LOW, MEDIUM, HIGH, EXTREME};  // an enum is a very simple kind of custom variable.

// Alien
class alien {
public:
    // limbCount
    int limbCount;
    // canFly
    bool canFly;
    // threatLevel
    threats threatLevel;
    // homePlanet
    string homePlanet;

    // Constructor (will randomize all data members)
    alien() {
        limbCount = rand() % 20 + 2;
        canFly = rand() % 2;
        homePlanet = planets[rand() % planets.size()];
        threatLevel = static_cast<threats>(rand() % 4);
    }
    // Constructor (will accept custom values)
    alien(int lc, bool cf, int tl, string hp) {
        limbCount = lc;
        canFly = cf;
        threatLevel = static_cast<threats>(tl);
        homePlanet = hp;
    }

    // Contact() (do they come in peace? Where do they come from?)
    void Contact() {
        cout << "a being approaches out of the fog. They have " << limbCount << " limbs.\n";
        cout << "'Hello.'\n";
        if(threatLevel <= 1) {
            cout << "'We come in peace, from the planet " << homePlanet << ".'\n";
        } else {
            cout << "'We are here to assimilate your culture into the glorious convent of " << homePlanet << ".'\n";
        }
    }

    // Depart() (how do they leave - walking or flying?)
    void Depart() {
        if(threatLevel <= 1) {
            if(canFly) {
                cout << "The alien rises into the air and flies away.\n";
            } else {
                if(limbCount > 6) {
                    cout << "The alien shuffles off on it's many legs.\n";
                } else {
                    cout << "The alien walks away into the fog.\n";
                }
            }
        } else {
            if(canFly) {
                cout << "The alien rises into the air and begins to rain fire on the nearest city.\n";
            } else {
                if(limbCount > 6) {
                    cout << "The alien skitters towards you, with menacing sparks in their eyes.\n";
                } else {
                    cout << "The alien aims it's weapon at you and pulls the trigger.\n";
                }
            }
        }
        
    }
};

int main() {
    srand(time(0));
    cout << "Let's meet some aliens!\n";

    // alien jimbo;
    // cout << "Hello. I am from " << jimbo.homePlanet << ".\n";
    // cout << "I have " << jimbo.limbCount << " limbs!\n";
    
    alien visitor;

    visitor.Contact();
    visitor.Depart();

}