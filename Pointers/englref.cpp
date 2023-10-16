// englref.cpp
// dereferencing the pointer returned by new
#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;
public:
    void getdist() {
        cout << "\nEnter feet: ";  cin >> feet;
        cout << "Enter inches: ";  cin >> inches;
    }
    void showdist(){
        cout << feet << "\'-" << inches << '\"';
    }
};

int main() {
    
    Distance dist;
    dist.getdist();
    dist.showdist();

    Distance* distptr;
    distptr = new Distance;  
    distptr->getdist();      
    distptr->showdist();     
    cout << endl;

    Distance& dist2 = *(new Distance);  
    dist2.getdist();
    dist2.showdist();
    cout << endl;

    return 0;
}