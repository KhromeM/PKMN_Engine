#include <iostream>
#include "data.hpp"

using namespace std;
int main(){
    cout << "Engine startup...\nEngine Online" << endl;
    
    int num_mons;
    Species* dex = create_dex(num_mons);

    for(int i=0; i<num_mons; i++){
        cout << dex[i].name << endl;
    }
}