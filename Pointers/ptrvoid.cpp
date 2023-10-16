// ptrvoid.cpp
// pointers to type void
#include <iostream>
using namespace std;
int main() {
    int intvar = 10;
    float flovar = 10.4;
    int* ptrint;
    float* ptrflo;
    void* ptrvoid;
    ptrint = &intvar;
    ptrflo = &flovar;

    // ptrint = &flovar; // error
    // ptrflo = &intvar; // error

    ptrvoid = &intvar;         //ok, int* to void*
    ptrint = reinterpret_cast<int*>(ptrvoid);

    ptrvoid = &flovar;         //ok, float* to void*
    ptrflo = reinterpret_cast<float*>(ptrvoid);
    

    cout << *ptrint <<endl;
    cout << *ptrflo <<endl;
    return 0;
}