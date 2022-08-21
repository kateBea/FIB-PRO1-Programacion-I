// P93157   READ A RATIONAL NUMBER (2)

#include <iostream>
using namespace std;

int mcd(int n, int m);
bool read_rational(int& num, int& den);

int main () {
    int x, y;
    while (read_rational(x, y)) {
        cout << x << ' ' << y << endl;
    }

    return 0;
}

int mcd(int n, int m) {
    if (m == 0) 
        return n;
    else 
        return mcd(m, n % m);
}

bool read_rational(int& num, int& den) {
    char ch;
    
    if (cin >> num >> ch >> den and ch == '/') {
        int maxCom = mcd(num, den);
        num /= maxCom;
        den /= maxCom;
        return true;
    }
    
    return false;
}