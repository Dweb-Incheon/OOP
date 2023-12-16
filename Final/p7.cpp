#include <memory>
#include <iostream>
using namespace std;

class Base{
public:
    virtual void show()=0;
};
class Uni1 : public Base {
public:
    void show(){ cout<< "Uni1"<< endl; }
};
class Uni2 : public Base {
public:
    void show(){ cout<< "Uni2"<< endl; }
};

//
class INU{
private:
    Base* _uni;
public:
    void whoAreU(Base* uni){
        _uni = uni;
        _uni->show();
    }
};
//

int main(){
    unique_ptr<Uni1> u1 = make_unique<Uni1>();
    unique_ptr<Uni2> u2 = make_unique<Uni2>();

    INU incheon;
    incheon.whoAreU(u1.get());
    incheon.whoAreU(u2.get());
}

