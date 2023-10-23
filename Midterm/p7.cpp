#include <iostream>
class A {
public:
   void func() { std::cout<< "A" <<std::endl; }
};
class B : public A {
public:
   void func(){ std::cout<< "B" <<std::endl; }
};
int main() {
    A* obj = new B();
    obj->func();
    return 0;
}
