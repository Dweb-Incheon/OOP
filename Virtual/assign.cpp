#include <iostream>
using namespace std;

class alpha {
private:
    int data;
public:
    alpha() {}
    alpha(int d) { data = d; }
    void display() { cout << data; }
    alpha operator = (alpha& a)   //overloaded = operator
    {
        data = a.data;            //not done automatically
        cout << "\n Assignment operator invoked";
        return alpha(data);
        // return new alpha(data);       //return copy of this alpha
        // return new alpha(data);
    }
};

int main() {
    alpha a1(37);
    alpha a2;
    a2 = a1;                        //invoke overloaded =
    cout << "\na2="; a2.display();  //display a2
    alpha a3 = a2; 

    alpha a4;  
    a4 = a3 = a2;

    /*
    alpha* a4;  
    a4 = a3 = a2;
    */   
    
    cout << "\na3="; a3.display();  //display a3
    cout << endl;
    return 0;
}