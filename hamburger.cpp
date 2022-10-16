#include "hamburger.h"

Hamburger::Hamburger(){
    sandwichType = "hambooger";
    lettuceWrap = 0;
    ketchup = 1;
    mayo = 0;

}

Hamburger::Hamburger(string newSandwichType, Meat newMeatType, bool newLettuceWrap, bool newKetchup, bool newMayo){
    sandwichType = newSandwichType;
    lettuceWrap = newLettuceWrap;
    ketchup = newKetchup;
    mayo = newMayo;
    meatType = newMeatType;
}

Hamburger::Hamburger(const Hamburger& old){
    sandwichType = old.sandwichType;
    meatType = old.meatType;
    lettuceWrap = old.lettuceWrap;
    ketchup = old.ketchup;
    mayo = old.mayo;
}

// Getters
bool Hamburger::getKetchup(){
    return ketchup;
}
bool Hamburger::getMayo(){
    return mayo;
}

// Setters
void Hamburger::setKetchup(bool newKetchup){
    ketchup = newKetchup;
}
void Hamburger::setMayo(bool newMayo){
    mayo = newMayo;
}

void Hamburger::printHamburger(){
    cout << " is a Hamburger sandwich. It has: " << endl;
    if (ketchup){
        cout << "Ketchup" << endl;
    }
    if(mayo){
        cout << "Mayo" << endl;
    }
}