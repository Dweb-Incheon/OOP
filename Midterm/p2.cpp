#include <iostream>
using namespace std;
class Passenger {
private:
   const string lab;
   const string univ;
public:
   Passenger(): lab("Dweb"), univ("INU"){ }
   void getField() {  cout << "lab: " << lab << ", univ: " << univ << endl;  }
};
int main(){
   Passenger P1;
   P1.getField();
}
