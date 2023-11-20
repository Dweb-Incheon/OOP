// file input with characters
#include <fstream>
#include <iostream>
using namespace std;
int main() {
    ifstream infile("TEST.TXT");
    cout << infile.rdbuf();
    cout << endl;
    return 0;
}