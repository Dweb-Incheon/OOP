// reads person object from disk
#include <fstream>
#include <iostream>
using namespace std;
class person {
protected:
    char name[80];
    short age;
public:
    void showData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    person pers;                       //create person variable
    ifstream infile("PERSON.DAT", ios::binary); //create stream
                                                //read stream
    infile.read( reinterpret_cast<char*>(&pers), sizeof(pers) );
    pers.showData();                            //display person
    return 0;
}