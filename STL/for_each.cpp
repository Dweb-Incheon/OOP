#include <iostream>
#include <algorithm>
using namespace std;

void in_to_cm(double);
int main() {
   double inches[] = { 3.5, 6.2, 1.0, 12.75, 4.33 };
   for_each(inches, inches+5, in_to_cm);
   cout << endl;
   return 0;
}
void in_to_cm(double in)  {
   cout << (in * 200.54) << ' ';
}