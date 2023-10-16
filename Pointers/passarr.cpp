// passarr.cpp
// array passed by pointer
#include <iostream>
using namespace std;
const int MAX = 5;
int main() {
    void centimize(double*);  
    double varray[MAX] = { 10.0, 43.1, 95.9, 59.7, 87.3 };
    centimize(varray);        
    for(int j=0; j<MAX; j++)  
        cout << "varray[" << j << "]="<< varray[j] 
        << " centimeters" << endl;
    return 0;
}
void centimize(double* ptrd) {
    for(int j=0; j<MAX; j++)
        *ptrd++ *= 2.54;       
}