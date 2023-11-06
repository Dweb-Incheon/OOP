#include <iostream>
using namespace std;

class Dweb{
private:
    int d1;   string d2;   double d3;
public:
    Dweb():d1(1), d2("Incheon"), d3(12.25){}
    // Dweb(Dweb& obj){
    //     d1 = obj.d1;
    //     d2 = obj.d2;
    //     d3 = obj.d3;
    //     cout << "😀" << endl;
    // }
    void print(){
        cout << d1 << '\t' << d2 << '\t' << d3 << endl;
    }
    // void operator= (Dweb& obj){
    //     d1 = obj.d1;
    //     d2 = obj.d2;
    //     d3 = obj.d3;
    //     cout << "🧑‍💻" << endl;
    // }
};

int main(){
    Dweb obj1;
    Dweb obj2;
    obj2 = obj1;     obj2.print();
    
    Dweb obj3(obj2); obj3.print();
    return EXIT_SUCCESS;
}

