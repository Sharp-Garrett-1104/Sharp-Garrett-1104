#include "sandwich.h"

Sandwich::Sandwich(){
    sandwichType = "QuinnContaldiWich";
    // AAAAAAA
    lettuceWrap = 0;
}
Sandwich::Sandwich(string newSandwichType, Meat newMeat, bool newLettuceWrap){
    sandwichType = newSandwichType;
    meatType = newMeat;
    lettuceWrap = newLettuceWrap;

}

Sandwich::Sandwich(const Sandwich& old){
    sandwichType = old.sandwichType;
    meatType = old.meatType;
    lettuceWrap = old.lettuceWrap;
}

// get er and set er
string Sandwich::getSandwichType(){
    return sandwichType;
}

void Sandwich::setSandwichType(string newSandwichType){
    sandwichType = newSandwichType;
}

bool Sandwich::getLettuceWrap(){
    return lettuceWrap;
}

void Sandwich::setLettuceWrap(bool newLettuceWrap){
    lettuceWrap = newLettuceWrap;
}

void Sandwich::printSandwich(){
     cout << "The " << sandwichType;
    if(lettuceWrap){
        cout << " lettuce wrap";
    }
}