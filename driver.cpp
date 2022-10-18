// Garrett Sharp
// 10/16/22
// Midterm Practice
#include "hamburger.h"
//hamburagar

int main(){

    Meat doublePatty("Double Patty", "Beef", 2);
    Hamburger doubleBurger("Double Beef Burger" , doublePatty, false, true, true);
    Sandwich doubleSandwich("Double Beef Burger", doublePatty, true);

    doubleSandwich.printSandwich();
    doubleBurger.printHamburger();
    doublePatty.printMeat();
    
    cout << endl << endl;
    doublePatty.setType("Chicken");
    doubleBurger.setMeatType(doublePatty);
    
    doubleBurger.printSandwich();
    doubleBurger.printHamburger();
    doublePatty.printMeat();
    return 0;
}
