// strimem.cpp
// memory-saving String class
// overloaded assignment and copy constructor
#include <iostream>
#include <cstring>              
using namespace std;

class strCount {
private:
    int count;
    char* str;
    friend class String;
    strCount(char const s[]) {
        int length = strlen(s);     //length of string argument
        str = new char[length+1];   //get memory for string
        strcpy(str, s);             //copy argument to it
        count=1;                    //start count at 1
    }
    ~strCount() { delete[] str; }   //delete the string
};
class String {
private:
    strCount* psc;
public:
    String() { psc = new strCount("NULL"); }
    String(char const s[]) { psc = new strCount(s); }
    String(String& S) { psc = S.psc; (psc->count)++; }
    ~String() {
        if(psc->count==1)
            delete psc;
        else
            (psc->count)--;
    }
    void display() {
        cout << psc->str;             
        cout << " (addr=" << psc << ")";  
    }
    void operator = (String& S) {
        if(psc->count==1)
            delete psc;
        else
            (psc->count)--;
        psc = S.psc;
        (psc->count)++;
    }
};

int main() {
    String s3 = "Distributed Systems and Web Engineering @ Incheon National University";
    cout << "\ns3="; s3.display();
    String s1;
    s1 = s3;
    cout << "\ns1="; s1.display();
    String s2(s3);
    cout << "\ns2="; s2.display();
    cout << endl;
    return 0;
}