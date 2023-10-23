#include <iostream>
using namespace std;
class foo {
private:
   static int count;
   int num;
public:
   int* getAddrCnt() { return &count; }
   int* getAddrNum() { return &num; }
};
int foo::count = 0;       

int main() {
   foo f1, f2;
   if (f1.getAddrCnt() == f2.getAddrCnt()) { cout << "400" << endl; }
   if (f1.getAddrNum() == f2.getAddrNum()) { cout << "500" << endl; }
   return 0;
}
