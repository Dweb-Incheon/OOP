#include <iostream>
using namespace std;
const int MAX = 100;            //size of array

template <class Type>
class Stack {
private:
    Type st[MAX];
    int top;
public:
    Stack() { top = -1; }
    void push(Type var) { st[++top] = var; }
    Type pop() { return st[top--]; }
};

int main() {
    Stack<float> s1;
    s1.push(1111.1F);
    s1.push(2222.2F);
    s1.push(3333.3F);
    cout << "1: " << s1.pop() << endl;
    cout << "2: " << s1.pop() << endl;
    cout << "3: " << s1.pop() << endl;
    
    Stack<long> s2;       //s2 is object of class Stack<long>
    s2.push(123123123L);  //push 3 longs, pop 3 longs
    s2.push(234234234L);
    s2.push(345345345L);
    cout << "1: " << s2.pop() << endl;
    cout << "2: " << s2.pop() << endl;
    cout << "3: " << s2.pop() << endl;
    return 0;
}