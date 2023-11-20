// reads formatted output from a file, using >>
#include <fstream>      //for file I/O
#include <iostream>
#include <string>
using namespace std;
int main() {
    char ch;
    int j;
    double d;
    string str1;
    string str2;
    ifstream infile("./dweb/fdata.txt");
    infile >> ch >> j >> d >> str1 >> str2;
    cout << ch << endl
         << j << endl
         << d << endl
         << str1 << endl
         << str2 << endl;
    return 0;
}