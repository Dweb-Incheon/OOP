#include <memory>
#include <iostream>

using namespace std;
class Person {
public:
    string name;
    int born;
    Person(string _name, int _born): name(_name), born(_born){};
};

int main() {
    unique_ptr<Person> p1 = make_unique<Person>("dweb", 2023);
    cout << p1->name << ", "<< p1->born << endl;
    Person* ptr = p1.get();
    ptr->name = "incheon";
    cout << p1->name << ", "<< p1->born << endl;
    return 0;
}