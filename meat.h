#ifndef MEAT_H
#define MEAT_H
#include <iostream>
#include <string>
using namespace std;

class Meat{
    // Variables
    string name;
    string type;
    int numParts;

    public:
        // Constructor
        Meat();
        Meat(string, string, int);
        Meat(const Meat&);

        // Getters
        string getName();
        string getType();
        int getNumParts();

        // Setters
        void setName(string);
        void setType(string);
        void setNumParts(int);
        
        void printMeat();

};

#endif