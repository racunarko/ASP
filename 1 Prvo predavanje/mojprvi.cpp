#include<iostream>

namespace n1 {
 float const PI = 3.14;
}

namespace n2 {
    float const PI = 3.141;
}

using namespace std;
using namespace n2;
using namespace n1;

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

class Point {


};

int main(){
    std::cout << "Hello world" << std::endl;
   // std::cout << PI; // ambiguous
    cout << n1::PI << endl;
    return 0;
}