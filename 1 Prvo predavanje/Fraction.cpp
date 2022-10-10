#include <iostream>

using namespace std;

class Fraction
{
private:
    /* data */
public:
    int b;
    int n;
    Fraction(int b, int n) : b(b), n(n) { }
    Fraction operator+(const Fraction f2) {
        int new_n = this->n * f2.n;
        int new_b = this->b * f2.b + this->n * f2.b;
        Fraction f3(new_b, new_n);
        return f3;
    }
    ~Fraction();
};

Fraction::Fraction(/* args */)
{
}

Fraction::~Fraction()
{
}


int main() {

    return 0;
}