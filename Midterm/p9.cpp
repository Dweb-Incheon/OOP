#include <iostream>
using namespace std;
class A{
public:
   const char* ptr;
   A(const char* xx) { 
      ptr = xx;
   }
};
int main() {
   A obj1("Dweb");
   A obj2 = obj1;
   if (&obj1.ptr == &obj2.ptr) { cout << "400" << endl; };
   if (*obj1.ptr == *obj2.ptr) { cout << "500" << endl; };
}