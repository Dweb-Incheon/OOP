#include <iostream>
#include <list>
using namespace std;
int main() {
    list<int> iList(5);
    list<int>::iterator it;  //iterator
    int data = 0;
    for(it = iList.begin(); it != iList.end(); it++)
        *it = data += 2;

    iList.push_back(100);
    iList.push_front(99);
    cout<< "❌" << iList.size()<<endl;

    for(it = iList.begin(); it != iList.end(); it++)
        cout << *it << ' ';

    cout << endl;
    return 0;
}