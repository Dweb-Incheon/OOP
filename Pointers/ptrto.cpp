// ptrto.cpp
// other access using pointers
#include <iostream>
using namespace std;
int main() {
    int var1, var2;
    int* ptr;
    ptr = &var1;
    *ptr = 37;
    var2 = *ptr;
    cout << var2 << endl;
    return 0;
}