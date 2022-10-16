#ifndef HAMBURGER_H
#define HAMBURGER_H
#include "sandwich.h"
#include <iostream>
#include <string>
using namespace std;

class Hamburger: Sandwich{
    // Variables
    bool ketchup;
    bool mayo;

    public:
        // Constructor
        Hamburger();
        Hamburger(string, Meat, bool, bool, bool);
        Hamburger(const Hamburger&);

        // Getters
        bool getKetchup();
        bool getMayo();

        // Setters
        void setKetchup(bool);
        void setMayo(bool);
        void printHamburger();

};

#endif