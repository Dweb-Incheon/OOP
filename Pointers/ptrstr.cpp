// ptrstr.cpp
// displays a string with pointer notation
#include <iostream>
using namespace std;

int main() {
    void dispstr(char*);     //prototype
    char str[] = "Idle people have the least leisure.";
    // cout << sizeof(str) << endl;
    dispstr(str);            //display the string
    return 0;
}

void dispstr(char* ps) {
    ps = ++ps;
    while( *ps )
        cout << *ps++;
    cout << endl;
}