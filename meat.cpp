#include "meat.h"

Meat::Meat(){
    name = "Contaldi Special";
    type = "Orphan";
    numParts = 4;
}
Meat::Meat(string newName, string newType, int newNumParts){
    name = newName;
    type = newType;
    numParts = newNumParts;
}
Meat::Meat(const Meat& old){
    name = old.name;
    type = old.type;
    numParts = old.numParts;
}

// Getter
string Meat::getName(){
    return name;
}
string Meat::getType(){
    return type;
}
int Meat::getNumParts(){
    return numParts;
}

// Setter
void Meat::setName(string newName){
    name = newName;
}
void Meat::setType(string newType){
    type = newType;
}
void Meat::setNumParts(int newNumParts){
    numParts = newNumParts;
}
