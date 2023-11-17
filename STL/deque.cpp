// demonstrates push_back(), push_front(), front()
#include <iostream>
#include <deque>
using namespace std;
int main() {
    deque<int> deq;
    deq.push_back(30);
    deq.push_back(40);
    deq.push_back(50);
    deq.push_front(20);
    deq.push_front(10);
    deq[2] = 33;
    for(int j=0; j<deq.size(); j++)
        cout << deq[j] << ' ';
    cout << endl;
    return 0;
}


