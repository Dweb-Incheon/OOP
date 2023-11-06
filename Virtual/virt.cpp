#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() { cout << "Base\n"; }
};
class Derv1 : public Base {
public:
    void show() { cout << "Derv1\n"; }
};
class Derv2 : public Base {
public:
    void show() { cout << "Derv2\n"; }
};

int main() {
    Derv1 dv1;
    Derv2 dv2;
    Base* ptr;
    ptr = &dv1;
    ptr->show();
    ptr = &dv2;
    ptr->show();
    return 0;
}