#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>
#include <string>
#include <unordered_map>
#include <vector>

using json = nlohmann::json;
using namespace std;

unordered_map<string,int> Type = {
        {"Normal", 0},
        {"Fighting", 1},
        {"Flying", 2},
        {"Poison", 3},
        {"Ground", 4},
        {"Rock", 5},
        {"Bug", 6},
        {"Ghost", 7},
        {"Fire", 8},
        {"Water", 9},
        {"Grass", 10},
        {"Electric", 11},
        {"Psychic", 12},
        {"Ice", 13},
        {"Dragon", 14}
};


struct Species {
    string name;
    int stats[5];
    int types[2];
    int id;
};

struct Move {
    string name;
    int pp;
};

bool monComparator(Species, Species);


int main(){
    ifstream jsonFile("./data/gen1.json");
    json data;    

    jsonFile >> data;
    jsonFile.close();

    json jsonMoves = data["moves"];
    vector<Move> moveset;   
    for(auto& [name, pp]: jsonMoves.items()){
        Move m{name, pp};
        moveset.emplace_back(m);
    }
    cout << "Number of moves: " << moveset.size() << endl;

    json jsonSpecies = data["species"];
    vector<Species> dex;   

    for(auto& [name, dataObj]: jsonSpecies.items()){
        Species mon;
        mon.name = name;

        json statsObj = dataObj["stats"];
        mon.stats[0] = statsObj["hp"];
        mon.stats[1] = statsObj["atk"];
        mon.stats[2] = statsObj["def"];
        mon.stats[3] = statsObj["spe"];
        mon.stats[4] = statsObj["spc"];

        json typesArr = dataObj["types"];
        mon.types[0] = Type[typesArr[0]];
        if (typesArr.size() == 2){
            mon.types[1] = Type[typesArr[1]];
        } else{
            mon.types[1] = -1;
        }
        
        mon.id = dataObj["id"];
        cout << mon.id << endl;
        dex.emplace_back(mon);
    }
    cout << "Number of pokemon: " << dex.size() << endl;

    sort(dex.begin(), dex.end(), monComparator);

    ofstream output("./src/data/data.cpp", ios::trunc);
    string start = 
R"(#include <string>
#include <vector>
#include "data.hpp"

using namespace std;

int num_mons = )" + to_string(dex.size())+ R"(;

Species* create_dex(int& length){
    length = num_mons;
    Species* dex = new Species[num_mons];

)";
    output << start;

    int i = 0;
    for (Species mon: dex){
        string name = "_" + to_string(i);
        output << "\n" << endl;
        output << "\tSpecies " << name << ";" << endl;
        output << "\t" << name << ".name = \"" << mon.name << "\";" << endl;
        output << "\t" << name << ".stats[0] = " << mon.stats[0] << ";" << endl;
        output << "\t" << name << ".stats[1] = " << mon.stats[1] << ";" << endl;
        output << "\t" << name << ".stats[2] = " << mon.stats[2] << ";" << endl;
        output << "\t" << name << ".stats[3] = " << mon.stats[3] << ";" << endl;
        output << "\t" << name << ".stats[4] = " << mon.stats[4] << ";" << endl;
        output << "\t" << name << ".types[0] = " << mon.types[0] << ";" << endl;
        output << "\t" << name << ".types[1] = " << mon.types[1] << ";" << endl;
        output << "\t" << "dex["  << i << "] = " << name << ";" << endl;
        i++;
    }

    output << "\treturn dex;" << endl;
    output << "}"<< endl;
    output.close();
    cout << "Done" << endl;

}

bool monComparator(Species a, Species b){
    return a.id < b.id;
}