// header for adventure functions

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

void setup();
int dieRoll(int max = 6);

// templates are a way to accept generic types
// of variables

// before, i had function overloading for
    // displayvec(vector<string> vec)
    // displayvec(vector<int> vec)
    // displayvec(vector<robot> vec)

template <typename T>
T& randomElement(vector<T>& vec) {
    if(vec.empty()) {
        throw invalid_argument("Empty Vector");
    }

    return vec[rand() % vec.size()];
}