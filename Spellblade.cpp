#include "Spellblade.h"

//constructor
Spellblade::Spellblade(string n, int h, int p, int armor, int sp)
: Warrior(n,h,p,armor), MagicalEntity(100,sp) {}  //initializing manapower by 100 to avoid garbage value

//calculate hybrid damage
int Spellblade::calculateHybridDamage() const {
    return getPower() + spellPower;
}