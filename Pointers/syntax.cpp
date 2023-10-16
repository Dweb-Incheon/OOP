// varaddr.cpp
// addresses of variables
#include <iostream>
using namespace std;
int main() {
    char c = 'I';

    char* ptr1, * ptr2, * ptr3;  // three variables of type char*
    ptr1 = ptr2 = ptr3 = &c;

    char *ptr4, *ptr5, *ptr6;  // three variables of type char*
    ptr4 = ptr5 = ptr6 = &c;
    
    char* ptr7, ptr8, ptr9;  // char* ptr7, char ptr8, char ptr9

    return 0;
}