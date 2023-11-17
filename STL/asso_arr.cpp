#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    string name;
    int pop;
    string states[] = { "Wyoming", "Colorado", "Nevada", "Montana", "Arizona", "Idaho"};
    int pops[] = { 470, 2890, 800, 787, 2718, 944 };
    map<string, int, less<string> > mapStates;       //map
    map<string, int, less<string> >::iterator iter;  //iterator
    
    for(int j=0; j<6; j++) {
        name = states[j];
        pop = pops[j];
        mapStates[name] = pop;
    }
    cout << "Enter state: ";
    cin >> name;
    pop = mapStates[name];
    cout << "Population: " << pop << ",000\n";
    cout << endl;

    for(iter = mapStates.begin(); iter != mapStates.end(); iter++)
        cout << (*iter).first << ' ' << (*iter).second << ",000\n";

    cout << "😀" <<endl;
    string key[] = { "aaa", "bbb", "ccc", "ddd", "eee", "aaa"};
    int value[] = { 470, 2890, 800, 787, 2718, 944 };
    multimap<string, int, less<string> > mmap;       //map
    multimap<string, int, less<string> >::iterator miter;  //iterator
    for(int j=0; j<6; j++) {
        name = key[j];
        pop = value[j];
        mmap.insert(make_pair(name, pop));
    }
    for(miter = mmap.begin(); miter != mmap.end(); miter++){
        // cout << (*miter).first << ' ' << (*miter).second << "\n";
        cout << miter->first << ' ' << miter->second << "\n";
    }
    miter = mmap.find("aaa");
	if ( miter == mmap.end()) {
		cout << "not exist.\n";
	}
	else {
        
		cout << "key " << miter->first << ", first value : " << miter->second << "\n";
	}
    for (miter = mmap.lower_bound("aaa"); miter != mmap.upper_bound("aaa"); miter++) {
		cout << miter->first << ":" << miter->second << " ";
	}
    cout << endl;
    return 0;
}