#include <iostream>
using namespace std;
class Dweb{
   string name;
};
typedef Dweb (*myFunc)(int, int, string);

Dweb abc (int a, int b, string c) {
   Dweb obj;
   return obj;
}
int main(){
   myFunc A = abc;
   Dweb obj = A(10, 10, "abx");
   return 0;
}
