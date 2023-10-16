// newstr.cpp
// using new to get memory for strings
#include <iostream>
#include <cstring>      //for strcpy(), etc
using namespace std;

class String {
private:
    char* str;
public:
    String(char* s) {
        str = s;
    }
    ~String() {
        cout << "Deleting str.\n";
        delete[] str;
    }
    void display() {
        cout << str << endl;
    }
};

void eraser(String xx){
    // nothing to do
} 

int main() {
    char* s = new char[100];                   
    cin >> s; 
    String s1 = s;                           //= "Who knows nothing doubts nothing.";
    eraser(s);
    s1.display();
    return 0;
}