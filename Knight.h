#ifndef KNIGHT_H
#define KNIGHT_H
#include <iostream>
#include <string>
#include "Warrior.h" 
using namespace std;

class Knight : public Warrior{
    private:
    int chargeBonus;
    public:
    Knight(string n, int p, int h, int armor, int charge);
    int getChargeBonus()const;
    int calculateBurstDamage() const;
};


#endif