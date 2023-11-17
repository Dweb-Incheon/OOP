#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {            
    set<string, less<string> > organic;
    set<string, less<string> >::iterator iter;
    organic.insert("Curine");  //insert organic compounds
    organic.insert("Xanthine");
    organic.insert("Curarine");
    organic.insert("Melamine");
    organic.insert("Cyanimide");
    organic.insert("Phenol");
    organic.insert("Aphrodine");
    organic.insert("Imidazole");
    organic.insert("Cinchonine");
    organic.insert("Palmitamide");
    organic.insert("Cyanimide");
    iter = organic.begin();    //display set
    while( iter != organic.end() )
        cout << *iter++ << '\n';
    string lower, upper;       //display entries in range
    cout << "\nEnter range (example C Czz): ";
    cin >> lower >> upper;
    iter = organic.lower_bound(lower);
    while( iter != organic.upper_bound(upper) )
        cout << *iter++ << '\n';
    return 0;
}