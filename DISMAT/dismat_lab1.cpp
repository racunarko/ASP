#include <iostream>
using namespace std;

double solveFor (double b[], double c[], int num) {
    if(b[1] * c[0] - b[0] * c[1] == 0) {
        exit(1);
    } 
    double lambda1 = (b[2] * c[0] - b[0] * c[2]) / (b[1] * c[0] - b[0] * c[1]);
    double lambda2 = (b[2] * c[1] - b[1] * c[2]) / (b[0] * c[1] - b[1] * c[0]);
    double an, an_1 = b[1], an_2 = b[0];
    for (auto i = 2; i <= num; i++) {
        an = lambda1 * an_1 + lambda2 * an_2;
        an_2 = an_1;
        an_1 = an;
    }
    return an;
}
int main(void) {
    int num;
    double b[3], c[3];
    cout << "Unesite nenegativan cijeli broj: ";
    cin >> num;
    for(auto i = 0; i < 3; i++) {
        cout << "Unesite vrijednost broja b_" << i << ": ";
        cin >> b[i];
    };
    for(auto i = 0; i < 3; i++) {
        cout << "Unesite vrijednost broja c_" << i << ": ";
        cin >> c[i];
    };
    cout << "Vrijednost broja b_n: " << solveFor(b, c, num) << endl;
    return 0;
}