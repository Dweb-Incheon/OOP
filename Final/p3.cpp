#include <iostream>
using namespace std;

typedef int (*cb)(int, int);

int myfunc1(int a, int b){return a+b;}
int myfunc2(int a, int b){return a-b;}

int countdown (int f, int s, cb func) {
    return func(f, s);
}
int main() {
    int sum=0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(i==j)
                sum += countdown(i, j, myfunc2);
            else
                sum += countdown(i, j, myfunc1);
        }
    }
    cout << sum << endl;
}
