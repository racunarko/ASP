#include<iostream>
using namespace std;

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main(void) {
    int a = 1;
    int &b = a;
    // slicno kao *b = &a;
    // ali kasnije bi trebalo eksplicitno dereferencirati
    b = 7;
    cout << a << " " << b << endl;

    a = 1;
    int c = 2;
    swap(a, c);
    cout << a << " " << c << endl;
    return 0;
}