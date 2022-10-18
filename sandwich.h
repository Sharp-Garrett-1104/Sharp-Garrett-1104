#ifndef SANDWICH_H
#define SANDWICH_H
#include "meat.h"
#include <iostream>
#include <string>
using namespace std;

class Sandwich{
    protected:
        // Private Variables/Data Types
        string sandwichType;
        Meat meatType;
        bool lettuceWrap;

    public:
        // Constructor
        Sandwich();
        Sandwich(string, Meat, bool);
        Sandwich(const Sandwich&);

        // Getter
        string getSandwichType();
        Meat getMeatType();
        bool getLettuceWrap();

        // Setter
        void setSandwichType(string);
        void setMeatType(Meat);
        void setLettuceWrap(bool);
        void printSandwich();
};








#endif