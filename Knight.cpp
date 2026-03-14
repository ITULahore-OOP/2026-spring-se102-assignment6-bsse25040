#include "Knight.h"

//constructor
Knight::Knight(string n, int h, int p, int armor, int charge) : Warrior(n, h, p, armor){
    chargeBonus = charge;
}

//getter
int Knight::getChargeBonus()const{
    return chargeBonus;
}

//calculatte burst damage
int Knight::calculateBurstDamage() const {
    return getPower() + getChargeBonus();
}