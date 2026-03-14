#include "Hero.h"

//constructor
Hero::Hero(string n, int h, int p) {
    heroName = n;
    health = h;
    basePower = p;
}

void Hero::takeDamage(int damage) {
    health -= damage;
    if (health < 0)   //ensure health is never negative
        health = 0;
}

//getters
string Hero::getName()const {
    return heroName;
}

int Hero::getHealth()const {
    return health;
}

int Hero::getPower()const{
    return basePower;
}

//compare strength
bool Hero::operator>(const Hero &other) const {
    return basePower > other.basePower;
}

//compare health
int Hero::operator+(const Hero &other) const {
    return health + other.health;
}

//destructor
Hero::~Hero() {}