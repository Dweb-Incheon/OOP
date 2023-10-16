// ptrvar.cpp
// pointers (address variables)
#include <iostream>
using namespace std;
int main() {
    int var1 = 11;
    int var2 = 22;
    cout << &var1 << endl      //print addresses of variables
    << &var2 << endl << endl;
    int* ptr;
    ptr = &var1;
    cout << ptr << endl;
    ptr = &var2;
    cout << ptr << endl;
    return 0;
}