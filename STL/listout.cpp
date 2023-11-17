#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main() {
    int arr[] = { 2, 4, 6, 8 };
    list<int> theList;
    
    for(int k=0; k<4; k++)
        theList.push_back( arr[k] );

    list<int>::iterator iter;   //iterator to list-of-ints
    for(iter = theList.begin(); iter != theList.end(); iter++)
        cout << *iter << ' ';   
    cout << endl;
    iter = theList.begin();
    while( iter != theList.end() )
        cout << *iter++ << ' ';

    cout << endl;
    return 0;
}