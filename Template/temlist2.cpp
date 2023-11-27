#include <iostream>
using namespace std;
const int LEN = 80;           //maximum length of names

class employee {
private:
    char name[LEN];
    unsigned long number;
public:
    friend istream& operator >> (istream& s, employee& e);
    friend ostream& operator << (ostream& s, employee& e);
};
istream& operator >> (istream& s, employee& e) {
   cout << "\n   Enter last name: ";
   cin >> e.name;
   cout << "   Enter number: ";
   cin >> e.number;
   return s;
}
ostream& operator << (ostream& s, employee& e) {
   cout << "\n   Name: " << e.name;
   cout << "\n   Number: " << e.number;
   return s;
}

template<class TYPE>
struct link {
    TYPE data;
    link* next;
};

template<class TYPE>
class linklist {
private:
    link<TYPE>* first;
public:
    linklist() { first = NULL; }
    void additem(TYPE d);
    void display();
};

template<class TYPE>
void linklist<TYPE>::additem(TYPE d)  //add data item
{
    link<TYPE>* newlink = new link<TYPE>;  //make a new link
    newlink->data = d;
    newlink->next = first;
    first = newlink;
}

template<class TYPE>
void linklist<TYPE>::display() {
    link<TYPE>* current = first;
    while( current != NULL ) {
        cout << endl << current->data;  //display data
        current = current->next;        //move to next link
    }
}

int main() {
    linklist<employee> lemp;
    employee emptemp;
    char ans;
    do {
        cin >> emptemp;         //get employee data from user
        lemp.additem(emptemp);  //add it to linked list ‘lemp’
        cout << "\nAdd another (y/n)? ";
        cin >> ans;
    } while(ans != 'n');
    
    lemp.display();
    cout << endl;
    return 0;
}