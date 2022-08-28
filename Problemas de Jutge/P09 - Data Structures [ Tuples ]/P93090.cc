// P93090   F008B. ADDITION OF FRACTIONS

#include <iostream>
using namespace std;

struct Fraction { 
    int num, den;
};

int mcd(int a, int b) {
    if (b == 0) return a;
    else return mcd(b, a%b);
}

Fraction addition(const Fraction& x, const Fraction& y) {
    Fraction add;
    add.num = x.den * y.num + y.den * x.num;
    add.den = x.den * y.den;
    int d = mcd(add.num, add.den);
    add.num /= d;
    add.den /= d;
    return add;
    
}

int main() {
    Fraction rat;
    Fraction result;
    char c;
    cin >> rat.num >> c >> rat.den;
    int m = mcd(rat.num, rat.den);
    result.num = rat.num/m;
    result.den = rat.den/m;

    while (c != '=') {
        if (cin >> c and c == '+') {
            cin >> rat.num >> c >> rat.den;
            result = addition(result, rat);
        }
    }

    cout << result.num << '/' << result.den << endl;

    return 0;
}
