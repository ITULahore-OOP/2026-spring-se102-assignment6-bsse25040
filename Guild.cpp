#include "Guild.h"
#include <iostream>
using namespace std;

//constructor
Guild::Guild(string name) {
    guildName = name;
    memberCount = 0;    //initialize member count by 0
    for(int i=0;i<15;i++)
        roster[i] = nullptr;  // safe initialization
}

//destructor
Guild::~Guild() {
    cout << "The guild " << guildName << " has been disbanded!\n";
}

//add hero to guild
void Guild::operator+=(Hero* newHero) {
    if(memberCount < 15){     //if member count is less than 15
        roster[memberCount] = newHero;    //add hero
        memberCount++;   //increase member count 
    } else {
        cout << "Guild is at full capacity!\n";
    }
}

//overload << operator
ostream& operator<<(ostream& os, const Guild& g) {
    os << "Guild: " << g.guildName << endl;
    os << "Members: " << g.memberCount << endl;
    for(int i=0;i<g.memberCount;i++){
        os << "- " << g.roster[i]->getName() << " (Power: " << g.roster[i]->getPower() << ")" << endl;
        //access hero name via getter and access hero power

    }
    return os;  //return stream 
}

//calculate total guild power by adding basePower of all heroes
int Guild::calculateTotalGuildPower() const {
    int total = 0;
    for(int i=0;i<memberCount;i++)
        total += roster[i]->getPower();
    return total;    //return total power
}

//display guild stats
void Guild::displayGuildStats() const {
    cout << "Guild Name: " << guildName << endl;
    cout << "Total Members: " << memberCount << "/15" << endl;
    cout << "Total Guild Power: " << calculateTotalGuildPower() << endl;
    for(int i=0;i<memberCount;i++){
        cout << "- " << roster[i]->getName() << " (Power: " << roster[i]->getPower() << ")" << endl;
    }
}