// saves person object to disk
#include <fstream>            //for file streams
#include <iostream>
using namespace std;

class person {
protected:
    char name[80];
    short age;
public:
    void getData() {
        cout << "Enter name: "; cin >> name;
        cout << "Enter age: "; cin >> age;
    }
    void print(){
        cout << "😮" << name << endl;
        cout << "😇" << age << endl;
    }
};

int main() {
    person pers;                   //create a person
    pers.getData();                //get data for person
                                   //create ofstream object
    ofstream outfile("PERSON.DAT", ios::binary);
                                  //write to it
    outfile.write(reinterpret_cast<char*>(&pers), sizeof(pers));

    pers.print();
    return 0;
}