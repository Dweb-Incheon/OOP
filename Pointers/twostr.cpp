// twostr.cpp
// strings defined using array and pointer notation
#include <iostream>
using namespace std;
int main() {
    char str1[] = "Defined as an array";
    char* str2 = "Defined as a pointer";
    cout << str1 << endl;
    cout << str2 << endl;
// str1++;
    str2++;
    cout << str2 << endl;
    return 0;
}

