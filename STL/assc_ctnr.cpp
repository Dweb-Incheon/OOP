#include <iostream>
#include <map> 
using namespace std;
 
int main() {
  map<int, string> ma;
  ma.insert(make_pair(1, "AAA"));  // key: 1 , value : AAA
  ma.insert(make_pair(3, "BBB"));  // key: 3,  value : BBB
  //We can use operator [] to add an element
  ma[5] = 10;
  // we can access key  using fisrt and value using second.
  for (auto iter = ma.begin(); iter != ma.end(); ++iter) {
      cout << "key : " << iter->first << " value : " << iter->second << '\n';
  }
  cout << "\n" << "\n";
  cout << "Searching!!" << '\n';
  cout << "key: 5, Value : ?";
  cout << ma.find(5)->second << endl;
 
  ma.erase(3);
  for (auto iter = ma.begin(); iter != ma.end(); ++iter) {
      cout << "key : " << iter->first << " value : " << iter->second << '\n';
  }
  cout << endl;
  return 0;
}