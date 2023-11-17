#include <iostream>
#include <algorithm>
#include <list>
using namespace std;
int main() {
    int arr[] = { 10, 20, 30, 40, 50 };
    list<int> theList;
    for(int j=0; j<5; j++)
        theList.push_back( arr[j] );    //transfer array to list
    ostream_iterator<int> ositer(cout, ", ");  //ostream iterator
    cout << "\nContents of list: ";
    copy(theList.begin(), theList.end(), ositer);  //display list
    cout << endl;
    return 0;
}