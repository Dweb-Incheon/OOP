// demonstrates constructors, swap(), empty(), back(), pop_back()
#include <iostream>
#include <vector>
using namespace std;
int main() {                             //an array of doubles
   double arr[] = { 1.1, 2.2, 3.3, 4.4 };
   vector<double> v1(arr, arr+4); //initialize vector to array
   vector<double> v2(4);
   // cout << v2[3] << endl;
   v1.swap(v2);
   // cout << v2[3] << endl;
   while( !v2.empty() ) {
      cout << v2.back() << ' ';
      v2.pop_back();
   }
   cout << endl;
   return 0;
}