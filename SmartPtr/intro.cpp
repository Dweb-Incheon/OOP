#include <iostream>
using namespace std;

class Point{
private:
    int x, y;
public:
    Point(): x(0), y(0){};
    Point(int x, int y): x(x), y(y) {};
    void Print() const {
        cout << x << ", " << y << endl;
    }
};

class SmartPtr{
private:
    Point* ptr;
public:
    SmartPtr(Point* p): ptr(p) {}
    ~SmartPtr(){
        delete ptr;
    }
    Point* operator->() const{
        return ptr;
    }
};

int main(){
    SmartPtr p1 = new Point(2,3);
    SmartPtr p2 = new Point(4,4);

    p1->Print();
    p2->Print();

    return 0;
}