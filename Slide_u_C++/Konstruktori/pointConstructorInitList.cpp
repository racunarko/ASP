#include <iostream>
using namespace std;

class Point {
    public:
    double x, y;
    Point() : x(0), y(0) {}
    Point(double xIn, double yIn) : x(xIn), y(yIn) {} // parametri se mogu zvati kao i clanske varijable
    Point(double x, double y) { // pokazivac this
        this->x = x;
        this->y = y;
    }
};

int main(void) {
    Point p, r(1,2);
    cout << p.x << " " << p.y << endl;
    cout << r.x << " " << r.y << endl;
    return 0;
}