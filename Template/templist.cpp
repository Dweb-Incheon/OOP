// implements linked list as a template
#include <iostream>
using namespace std;

template<class TYPE>                  //struct link <TYPE>
struct link {
   TYPE data;                         //data item
   link* next;                        //pointer to next link
};

template<class TYPE>                  //class linklist <TYPE>
class linklist {
private:
   link<TYPE>* first;
public:
   linklist() { first = NULL; }
   void additem(TYPE d);           //add data item (one link)
   void display();                 //display all links
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
      cout << endl << current->data;  //print data
      current = current->next;        //move to next link
   }
}

int main() {
   linklist<double> ld; //ld is object of class linklist<double>
   ld.additem(151.5);   //add three doubles to list ld
   ld.additem(262.6);
   ld.additem(373.7);
   ld.display();        //display entire list ld

   linklist<char> lch;  //lch is object of class linklist<char>
   lch.additem('a');
   lch.additem('b');
   lch.additem('c');
   lch.display();
   cout << endl;
   return 0;
}