#include <iostream>
using namespace std;

class Uni{
public:
    string _name;
    string GetName() const { return _name; };
    Uni(string name): _name(name){};
    const Uni& FinalTest1(Uni& uni) const{
    //Uni& FinalTest1(Uni& uni) const {
        cout << uni.GetName();
        return *this;
    };
};
Uni FinalTest2(const Uni& uni){
    Uni _uni = uni;
    return _uni;
};
const Uni& FinalTest3(Uni& uni) {
    return uni;
};
int main() {
    Uni* kim = new Uni("kim");            
    cout << kim->GetName() << endl; 
    Uni twinKim = FinalTest2(*kim);    
    cout << twinKim.GetName() << endl; 
    const Uni& cloneKim = FinalTest3(twinKim);
    cout << cloneKim.GetName() << endl;    
}
