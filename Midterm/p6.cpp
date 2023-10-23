#include <iostream>
class Dweb {
public:
   int num;
   Dweb(int d) { num = d; }
   void operator += (Dweb d) {
      num += d.num;
   }
};
int main(){
   Dweb d1(1), d2(2);
   d1 += d2;
   std::cout << d1.num << std::endl;
   return 0;
}
