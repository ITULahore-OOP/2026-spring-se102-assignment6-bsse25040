#ifndef SPELLBLADE_H
#define SPELLBLADE_H
#include <iostream>
#include <string>
#include "Warrior.h"
#include "MagicalEntity.h"
using namespace std;

class Spellblade : public Warrior, public MagicalEntity {
    public:
    Spellblade(string n, int h, int p, int armor, int sp);
    int calculateHybridDamage() const;
};

#endif