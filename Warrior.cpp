#include "Warrior.h"

//constructor
Warrior::Warrior(string n, int h, int p, int armor): Hero(n , h, p) {
    armorRating = armor;
}

//getter
int Warrior::getArmor()const{
    return armorRating;
}

//calculate effective health of warrior
int Warrior::calculateEffectiveHealth() const {
    return getHealth() + (armorRating * 2);
}