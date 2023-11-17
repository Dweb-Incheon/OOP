#include <iostream>
#include <list>
using namespace std;
int main() {
    int arr[] = { 2, 4, 6, 8, 10 };
    list<int> theList;
    for(int j=0; j<5; j++)
        theList.push_back( arr[j] );
    list<int>::reverse_iterator revit;
    revit = theList.rbegin();
    while( revit != theList.rend() )
        cout << *revit++ << ' ';
    cout << endl;
    return 0;
}