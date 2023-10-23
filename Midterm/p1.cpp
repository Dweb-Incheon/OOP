#include <iostream>
using namespace std;
struct Passanger { string name; };
void constArgument (Passanger pass){
    pass.name = "INU";
}
int main() {
    Passanger p;
    p.name = "DWeb";
    constArgument(p);
    cout << p.name << endl;
    return 0;
}
