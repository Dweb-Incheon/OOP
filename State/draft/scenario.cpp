#include "gumball.h"

int main() {
    GumballMachine* gumballMachine = new GumballMachine(5);
    display(gumballMachine);

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    display(gumballMachine);

    gumballMachine->insertQuarter();
    gumballMachine->ejectQuarter();
    gumballMachine->turnCrank();

    display(gumballMachine);

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->ejectQuarter();

    display(gumballMachine);
    
    gumballMachine->insertQuarter();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    
    display(gumballMachine);
}