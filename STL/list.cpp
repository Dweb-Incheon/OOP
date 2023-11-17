#include <iostream>
#include <list>
using namespace std;
int main() {
    list<int> ilist;
    ilist.push_back(30);
    ilist.push_back(40);
    ilist.push_front(20);
    ilist.push_front(10);
    int size = ilist.size();
    for(int j=0; j<size; j++) {
        cout << ilist.front() << ' ';
        ilist.pop_front();
    }
    cout << endl;
    return 0;
}
