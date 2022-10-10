#include<iostream>
#include<cmath>

using namespace std;

// function overloading
int kvadrat(int arg) {
    cout << "int ";
    return arg * arg;
}

double kvadrat(double arg) {
    cout << "double ";
    return arg * arg;
}
//-----------------------


int main() {
    double v;
    cin >> v;
    if (v < 0) {
         cerr << "Negativni broj" << endl; // standard output stream for errors
    } else {
        cout << sqrt(v) << endl; // function is in cmath header file
    }
    cout << kvadrat(2) << endl;
    return 0;
}