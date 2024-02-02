#pragma once

#include <string>

using namespace std;
struct Species {
    string name;
    int stats[5];
    int types[2];
};

struct Move {
    string name;
    int pp;
};


Species* create_dex(int& length);
