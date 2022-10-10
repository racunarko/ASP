#include <iostream>

using namespace std;


class Shape{
    private:
        int x;
        //friend void f(Shape &s);
    public:
        int y;
        Shape() {  };
        Shape(int x) { this->x = x; }
        static void g() {};
};

// void f(Shape &s) { s.y; }

class Rectangle : private Shape{
    public:
    // Rectangle() : Shape() {  }
    using Shape::Shape;
    Rectangle(int x) : Shape(x) {  }
    // void Print() {cout << x;}
};

int main() {
    Shape s; 

    Shape::g();
    
    // Rectangle r; r.x = 5;
    return 0;
}