// ochar.cpp
// file output with characters
#include <fstream> //for file functions
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str = "Time is a great teacher, but unfortunately "
                 "it kills all its pupils. Berlioz"
                 "Incheon National University";
    
    ofstream outfile("TEST.TXT");
    for(int j=0; j<str.size(); j++)
        outfile.put( str[j] );

    cout << "File written\n";
    return 0;
}