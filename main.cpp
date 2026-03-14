#include <iostream>
#include "Knight.h"
#include "Spellblade.h"
#include "Guild.h"

using namespace std;

int main() {

    Guild g("Eldoria Heroes");

    //dynamically create heroes and assign to Hero pointers
    Hero* h1 = new Knight("Arthur",100,40,20,30);
    Hero* h2 = new Warrior("Bjorn",120,35,25);
    Hero* h3 = new Spellblade("Kael",90,38,15,25);
    
    //recruit heroes into the guild using overloaded '+=' operator
    g += h1;
    g += h2;
    g += h3;

    //print the guild status using overloaded '<<' operator
    cout << g << endl;

    //determine the strongest hero among all three
    //uses overloaded '>' operator which compares basePower of heroes
    Hero* strongest = h1;       //assume h1 is strongest initially
    if (*h2 > *strongest) strongest = h2;    //Compare h2 with current strongest
    if (*h3 > *strongest) strongest = h3;     //Compare h3 with current strongest
    
    //print the name of the strongest hero
    cout << strongest->getName() << " is the strongest hero!" << endl;

    //calculate combined vitality of h1 and h2 using overloaded '+' operator
    cout << "Combined Vitality: " << (*h1 + *h2) << endl;

    return 0;
}