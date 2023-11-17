#include <iostream>
#include <vector>
using namespace std;
int main() {
    int arr[] = { 100, 110, 120, 130 };  //an array of ints
    vector<int> v(arr, arr+4);
    cout << "\nBefore insertion: ";
    for(int j=0; j<v.size(); j++)
        cout << v[j] << ' ';
    v.insert( v.begin()+2, 115);
    cout << "\nAfter insertion:  ";
    for(int j=0; j<v.size(); j++)
        cout << v[j] << ' ';
    v.erase( v.begin()+2 );
    cout << "\nAfter erasure:    ";
    for(int j=0; j<v.size(); j++)
        cout << v[j] << ' ';
    cout << endl;
    return 0;
}
