#include <iostream>
using namespace std;
class Base {
public:
    ~Base()
    //virtual ~Base()    //virtual destructor
    { cout << "Base destroyed\n"; }
};

class Derv : public Base {
public:
    ~Derv() { cout << "Derv destroyed\n"; }
};

int main() {
    Base* pBase = new Derv;
    delete pBase;
    return 0;
}

