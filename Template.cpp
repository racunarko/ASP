#include <iostream>

template<typename T>
class Point {
    public:
        T x;
        T y;
        Point(T x, T y) : x(x), y(y) {}
};

template<typename T>
class Pair {
    public:
        T a;
        T b;
        Pair(T a, T b) : a(a), b(b) {}
};

int main(void) {
    Point<int> p(2,3);
    std::cout << p.x << " " << p.y << std::endl;
    return 0;
}