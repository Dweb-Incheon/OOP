#include <iostream>
using namespace std;
const int MAX = 10;

//
template <class T>  //typename
class Stack {
    T st[MAX];
    int top;
public:
    Stack() { top = -1; }
    void push(T var) { st[++top] = var; }
    T pop() { return st[top--]; }
};
//

int main(){
    Stack<string> s;
    s.push("Incheon");
    s.pop();
    return 0;
}