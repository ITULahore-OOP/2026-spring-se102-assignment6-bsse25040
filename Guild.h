#ifndef GUILD_H
#define GUILD_H
#include <iostream>
#include <string>
#include "Hero.h"
using namespace std;

class Guild{
    private:
    string guildName;
    Hero* roster[15];    //array of pointers to heroes (composition), max 15
    int memberCount;
    public:
    Guild(string);
    ~Guild();
    string getName();
    int getHealth();
    int getPower();
    void takeDamage(int);
    void operator+=(Hero* newHero);
    friend ostream& operator<<(ostream& os, const Guild& g);
    int calculateTotalGuildPower() const;
    void displayGuildStats() const ;
};

#endif
