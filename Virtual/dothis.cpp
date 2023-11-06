#include <iostream>
using namespace std;

class what {
private:
    int alpha;
public:
    void tester() {
        this->alpha = 11;
        cout << this->alpha;  //same as cout << alpha;
    }
};

int main() {
    what w;
    w.tester();
    cout << endl;
    return 0;
}