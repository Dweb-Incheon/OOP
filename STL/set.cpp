#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {                     
    string names[] = {"Juanita", "Robert", "Mary", "Amanda", "Marie"};
    set<string, less<string> > nameSet(names, names+5);
    set<string, less<string> >::iterator iter;
    nameSet.insert("Yvette");  //insert more names
    nameSet.insert("Larry");
    nameSet.insert("Robert");  //no effect; already in set
    nameSet.insert("Barry");
    nameSet.erase("Mary");     //erase a name
    cout << "\nSize=" << nameSet.size() << endl;
    iter = nameSet.begin();    //display members of set
    while( iter != nameSet.end() )
        cout << *iter++ << '\n';
    string searchName;         //get name from user
    cout << "\nEnter name to search for: ";
    cin >> searchName;
    iter = nameSet.find(searchName);
    if( iter == nameSet.end() )
        cout << "The name " << searchName << " is NOT in the set.";
   else
      cout << "The name " << *iter << " IS in the set.";
   cout << endl;
   return 0;
   }