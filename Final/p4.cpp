#include <iostream>
using namespace std;

class Layer0{
protected:
    Layer0* L0;
public:
    virtual double value()=0 ;
};

class Sub0 : public Layer0{
public:
    virtual double value()=0 ;
};

class Layer1 : public Layer0{
public:
    double value(){ return 200; };   
};

class Sub1 : public Sub0{

public:
    Sub1(Layer0* L) {Sub0::L0 = L;};
    double value(){ return L0->value() * 2; };   
};

class Sub2 : public Sub0{
public:
    Sub2(Layer0* L) {Sub0::L0 = L;};
    double value(){ return L0->value() * 3; };   
};

int main(){
    //
    Layer0* layer = new Layer1();
    layer = new Sub1(layer);
    layer = new Sub2(layer);
    //
    cout << layer->value() << endl;
    return 0;
}
