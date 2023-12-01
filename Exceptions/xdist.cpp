#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;
public:
    class InchesEx { };
    Distance(){ feet = 0; inches = 0.0; }                  //constructor (no args)
    Distance(int ft, float in){  //constructor (two args)
        if(in >= 12.0)
            throw InchesEx();    //if inches too big, throw exception
        feet = ft;
        inches = in;
    }
    void getdist(){              //get length from user
        cout << "\nEnter feet: ";  cin >> feet;
        cout << "Enter inches: ";  cin >> inches;
        if(inches >= 12.0)       //if inches too big,
            throw InchesEx();     //throw exception
    }
    void showdist() { cout << feet << "\'-" << inches << '\"'; }
};
int main() {
    try {
        Distance dist1(17, 3.5);
        Distance dist2;
        dist2.getdist();
        cout << "\ndist1 = ";  dist1.showdist();
        cout << "\ndist2 = ";  dist2.showdist();
    }
    catch(Distance::InchesEx){      //catch exceptions
        cout << "\nInitialization error: "
        "inches value is too large.";
    }
    cout << endl;
    return 0;
}
