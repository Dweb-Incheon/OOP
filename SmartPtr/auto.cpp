#include <iostream>
using namespace std;
double func1(double x, int y) { return x + y; }

auto func2(double x, int y) { return x - y; }

int main( ) {
    auto a = 5.1;   
    auto b = 1 + 2; 
    auto res1 = func1(a, b);
    cout << res1 << endl;
    auto res2 = func2(a, b);
    cout << res2 << endl;
    return 0;
}
