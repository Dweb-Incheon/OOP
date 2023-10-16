// newintro.cpp
// introduces operator new
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char str[] = "Idle hands are the devil’s workshop.";
    int len = strlen(str);
    char* ptr;
    ptr = new char[len+1];
    strcpy(ptr, str);
    cout << "ptr=" << ptr << endl;
    delete[] ptr;
    return 0;
}