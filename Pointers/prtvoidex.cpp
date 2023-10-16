#include <iostream>
using namespace std;

#define SIZE 10
class VoidPtr {
private:
    void *voidptr;
public:
    VoidPtr(int s){
        voidptr = new void*[s];
    }
    void* getPtr() { return voidptr; }
    ~VoidPtr() {
        int* xx = reinterpret_cast<int*> (getPtr());
        delete[] xx; 
    }
};

int main(){
    VoidPtr myVoid(SIZE);

    char* s = reinterpret_cast<char*> (myVoid.getPtr());
    cin >> s;  cout << s << endl;
    // cout << strlen(s) <<endl;
    int* i = reinterpret_cast<int*> (myVoid.getPtr());
    i[0] = 4;
    i[9] = 1023; 
    for (int idx=0; idx<SIZE; idx++){
        cout << i[idx] << ", ";
    }
    cout<<endl;
    return 0;
}