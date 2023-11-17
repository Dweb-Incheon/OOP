// sorts array of doubles in backward order,
// uses greater<>() function object
#include <iostream>
#include <algorithm>

// class greater_{
// public:
//     void sorting(){
//         std::cout<< "sort~"<<std::endl;
//     };
// };
// void aaa(greater_ xx){ 
//     xx.sorting();
// };

using namespace std;
double fdata[] = { 19.2, 87.4, 33.6, 55.0, 11.5, 42.2 };
int main() {                          //sort the doubles
    // aaa(greater_());
    
    sort( fdata, fdata+6 );
    sort( fdata, fdata+6, greater<double>() );
    for(int j=0; j<6; j++)      //display sorted doubles
        cout << fdata[j] << ' ';
    cout << endl;
    return 0;
}