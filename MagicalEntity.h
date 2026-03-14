#ifndef MAGICALENTITY_H
#define MAGICALENTITY_H
#include <iostream>
#include <string>
using namespace std;

class MagicalEntity{
    protected:
    int manaPool;
    int spellPower;
    public:
    MagicalEntity(int mp, int sp);
    int getMana()const;
    int getSpellPower()const;
};


#endif