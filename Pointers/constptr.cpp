// copystr.cpp
// copies one string to another with pointers
#include <iostream>
using namespace std;

int main() {
    char str1[] = "Distributed Systems and Web Engineering";
    char str2[] = "Incheon National University";
    str1[0] = 'd';

    const char* constStr = str1; 
    cout << constStr << endl;
    constStr[0] = 'd';
    
    constStr = str2;
    cout << constStr << endl;

    char* const constStr2 = str2;
    constStr2 = str1;

    return 0;
}


