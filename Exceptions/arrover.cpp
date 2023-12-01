#include <iostream>
using namespace std;

const int LIMIT = 100;         //array size

class safearay {
private:
    int arr[LIMIT];
public:
    int& operator [](int n)  //note: return by reference
    {
        if( n< 0 || n>=LIMIT ) {
            cout << "\nIndex out of bounds"; exit(1);
        }
        return arr[n];
    }
};

int main() {
    safearay sa1;
    for(int j=0; j<LIMIT; j++)  //insert elements
    sa1[j] = j*10;
    for(int j=0; j<LIMIT; j++) {
        int temp = sa1[j];
        cout << "Element " << j << " is " << temp << endl;
    }
    return 0;
}
