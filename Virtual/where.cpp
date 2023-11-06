#include <iostream>
using namespace std;

class where {
private:
    char charray[10];
public:
    void reveal() { cout << "\nMy object's address is " << this; }
};

int main() {
    where w1, w2, w3;
    w1.reveal();
    w2.reveal();
    w3.reveal();
    cout << endl;
    return 0;
}