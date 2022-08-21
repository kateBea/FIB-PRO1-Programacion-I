// P38045 COMPUTING SQUARE ROOTS AND SQUARES

#include <iostream>
#include <cmath>
using namespace std;

int square (int x) {
    x = x * x;
    return x;
}

double root (double y) {
    cout.setf(ios::fixed);
    cout.precision(6);
    
    y = sqrt(y);
    return y;
}

int main () {
    double  n;
    while (cin >> n) {
        cout << square (n) << " " << root (n) << endl;
    }

    return 0;
}
