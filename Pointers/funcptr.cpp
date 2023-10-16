#include <iostream>
using namespace std;

typedef int (*calcFuncPtr)(int, int);

namespace Dweb {
    int plus (int f, int s) { return f + s; }
    int minus (int f, int s) { return f - s;}
    int multiple (int f, int s) { return f * s; }
    int division (int f, int s) { return f / s; }
}
int calculator (int f, int s, calcFuncPtr func) { return func (f, s); }

int main() {
    calcFuncPtr calc = NULL;
    int a = 0, b = 0;
    char op = 0;
    int result = 0;
    cin >> a >> op >> b;
    
    switch(op)
    {
        case '+':
            calc = Dweb::plus;
            break;

        case '-':
            calc = Dweb::minus;
            break;

        case '*':
            calc = Dweb::multiple;
            break;

        case '/':
            calc = Dweb::division;
            break;
    }
    result = calculator (a, b, calc);
    cout << result << endl;
    return 0;
}