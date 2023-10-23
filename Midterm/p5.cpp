#include <iostream>
using namespace std;
class Counter {
   unsigned int count;
public:
   Counter(int c) {count=c;}
   Counter operator ++ (int)
   {
      return Counter(count++); 
   }
};
int main() {
   Counter c1(0), c2(0);
   c2 = c1++;
   return 0;
}
