#include <iostream>
using namespace std;

class A {
private:
    string str;
public:
    A(string _name): str(_name){}
    string* getAddr(){ return &str; }
    string getString(){ return str; }
};
int main(){
    A s1("Dweb");
    A s2 = s1;
    if (s1.getString() == s2.getString())
        cout << "The data in s2 is the same as that in s1." << endl;
    if (s1.getAddr() != s2.getAddr())
        cout << "s2 is different from s1" << endl;
    return 0;
}

