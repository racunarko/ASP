#include <iostream>

using namespace std;

class Fraction
{
private:
    /* data */
public:
    int b;
    int n;
    Fraction() {}
    Fraction(int b, int n) : b(b), n(n) { }
    Fraction operator+(const Fraction f2) {
        int new_n = this->n * f2.n;
        int new_b = this->b * f2.b + this->n * f2.b;
        Fraction f3(new_b, new_n);
        return f3;
    }

    friend ostream& operator<<(ostream& os, const Fraction f) {
        os << f.b << "/" << f.n << endl;
        return os;
    }   
};

int main() {
    Fraction f = {5, 2};
    Fraction *polje = new Fraction[5];
    delete [] polje;
    cout << f;
    return 0;
}