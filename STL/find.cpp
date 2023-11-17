#include <iostream>
#include <algorithm>                   //for find()
using namespace std;
int arr[] = { 11, 22, 33, 44, 55, 66, 77, 88 };
int main() {
   int* ptr;
   ptr = find(arr, arr+8, 55);          //find first 33
   cout << "First object with value 33 found at offset "
   << (ptr-arr) << endl;

   // cout << *ptr <<endl;
   return 0;
}