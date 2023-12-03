#ifndef GUMBALL_H
#define GUMBALL_H

#include <iostream>
using namespace std;

#define SOLD_OUT 0
#define NO_QUARTER 1
#define HAS_QUARTER 2
#define SOLD 3

class GumballMachine {
private:
    int state = SOLD_OUT;
    int count = 0;
public:
    GumballMachine(int count) {
        this->count = count;
        if(count > 0)
            state = NO_QUARTER;
    }
    void insertQuarter(){
        if (state== HAS_QUARTER) {
            cout<< "You can’t insert another quarter" << endl;
        } else if (state == NO_QUARTER) {
            state = HAS_QUARTER;
            cout<< "You inserted a quarter" << endl;
        } else if (state == SOLD_OUT) {
            cout<< "You can’t insert a quarter, the machine is sold out" << endl;
        } else if (state == SOLD) {
            cout<< "Please wait, we’re already giving you a gumball\n" << endl;
        }
    }
    void ejectQuarter() {
        if (state == HAS_QUARTER) {
            cout<< "Quarter returned" <<endl;
            state = NO_QUARTER;
        } else if (state == NO_QUARTER) {
            cout << "You haven’t inserted a quarter" << endl;
        } else if (state == SOLD) {
            cout << "Sorry, you already turned the crank" << endl;
        } else if (state == SOLD_OUT) {
            cout << "You can’t eject, you haven’t inserted a quarter yet\n" << endl;
        }
    }

    void turnCrank() {
        if (state == SOLD) {
            cout << "Turning twice doesn’t get you another gumball!" << endl;
        } else if (state == NO_QUARTER) {
            cout<< "You turned but there’s no quarter" << endl;
        } else if (state == SOLD_OUT) {
            cout << "You turned, but there are no gumballs" << endl;
        } else if (state == HAS_QUARTER) {
            cout << "You turned...\n" << endl;
            state = SOLD;
            dispense();
        }
    }
    void dispense(){
        if (state == SOLD) {
            cout << "A gumball comes rolling out the slot" << endl;
            count = count - 1;
            if (count == 0) {
                cout << "Oops, out of gumballs!" << endl;
                state = SOLD_OUT;
            } else {
                state = NO_QUARTER;
            }
        } else if (state == NO_QUARTER) {
            cout << "You need to pay first" << endl;
        } else if (state == SOLD_OUT) {
            cout << "No gumball dispensed" << endl;
        } else if (state == HAS_QUARTER) {
            cout << "No gumball dispensed\n" << endl;
        }
    }
    friend void display(GumballMachine* gumballMachine);
};

void display(GumballMachine* gumballMachine){
        cout << endl;
        cout << "Incheon Songdo Gumball Machine" << endl;
        cout << "There is " << gumballMachine->count << " coin left." << endl;
        cout << endl;
}

#endif