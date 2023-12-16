#include <iostream>
using namespace std;
struct INU { string name; };
void Pass (string n1, string* n2){
    n1 = *n2;
};
int main() {
    INU incheon;
    incheon.name = "incheon";
    string str1 = "songdo";
    Pass(str1, &incheon.name);
    cout << str1 << endl;
    return 0;
}
