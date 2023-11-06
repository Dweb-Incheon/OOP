#include <iostream>
using namespace std;

class test{
private:
    static int total;
    int id;
public:
    test() {
        total++;
        id = total;
    }
    ~test() {
        total--;
        cout << "Destroying ID number " << id  << endl;
    }
    static void showtotal() //static function
    {
        cout << "Total is " << total << endl;
    }
    void showid()           //non-static function
    {
        cout << "ID number is " << id << endl;
    }
};
int test::total = 0;        

int main() {
    test::showtotal();
    test g1;
    test::showtotal();
    test g2, g3;
    test::showtotal();
    g1.showid();
    g2.showid();
    g3.showid();
    cout << "----------end of program----------\n";
    return 0;
}