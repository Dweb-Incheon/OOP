#include <iostream>
using namespace std;

class DynamicSingleton {
private:
    string name;
    DynamicSingleton(): name("Dweb") {};
    DynamicSingleton(const DynamicSingleton& other);
    static DynamicSingleton* instance;
 
public:
    string getName(){return name;}
    static DynamicSingleton* GetInstance() {
        if(instance == NULL)
            instance = new DynamicSingleton();
        return instance;
    }
};
DynamicSingleton* DynamicSingleton::instance = nullptr; // int* instance = 0;
 
int main(){
    DynamicSingleton* obj1 = DynamicSingleton::GetInstance();
    DynamicSingleton* obj2 = DynamicSingleton::GetInstance();
    DynamicSingleton& obj3 = *obj2;
    cout<< obj1->getName() <<endl;
    cout<< obj2->getName() <<endl;
    cout<< obj3.getName() <<endl;
    cout << obj1 << endl;
    cout << obj2 << endl;
    cout << &obj3 << endl;
}