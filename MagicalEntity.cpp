#include "magicalentity.h"

//constructor
MagicalEntity::MagicalEntity(int mp , int sp){
    manaPool=mp;
    spellPower=sp;
}

//getters
int MagicalEntity::getMana()const{
    return manaPool;
}

int MagicalEntity::getSpellPower()const{
    return spellPower;    
}