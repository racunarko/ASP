#include <iostream>
using namespace std;

struct Point
{
    /* data */
    int x;
    int y;
};

int main(void) {
    Point p = {1, 2};
    Point r = {3}; // will initialize r.y with 0
    cout << p.x << " " << p.y << std::endl;
    cout << r.x << " " << r.y << std::endl;
    return 0;
} 
