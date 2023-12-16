#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v;
    v.push_back(10);
    v.pop_back();
    v.push_back(11);
    v.push_back(12);
    v[1] = 15;
    v.push_back(13);
    for(auto it = v.begin(); it!=v.end(); it++)  
        cout << *it << endl;
    return 0;
}
