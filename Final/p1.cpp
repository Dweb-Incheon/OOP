#include <iostream>
using namespace std;
class Final{
private:
    int _n;
public:
    Final(int n): _n(n){};
    void show(){cout<<_n<<endl;};
    //
    void operator +=(Final f){
        _n += f._n;
    };
    //
};

int main(){
    Final f1(10);
    Final f2(11);
    f2 += f1;
    f2.show();
}
