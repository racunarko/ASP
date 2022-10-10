#include <iostream>

using namespace std;

class Point {
public:
    int x;
    int y;
    Point() { x = 0; y = 0;}
    // Point(int x1, int y1) { x = x1; y = y1; }; // ovo je lame
    //Point(int x, int y) {this->x = x; this->y=y;}
    Point(int x, int y): x(x), y(y) {}
    void Print() { cout << "X: " << x << " Y: " << y << endl; }
    ~Point() { cout << "U destruktoru" << endl; }
};



int main(){

    Point p;
    p.Print();
    Point p1(3,4);
    p1.Print();
    Point a = p;
    a.Print();
    a.x = 1;
    p.Print();
    a.Print();
    Point *c = &p;
    (*c).x = 5;
    c->Print();
    Point point {3,4}; // uniformna incijalizacija
    // int i {7};
    return 0;
}