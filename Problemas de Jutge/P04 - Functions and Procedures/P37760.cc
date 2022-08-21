// P37760   TRIGONOMETRY

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

double sine (double x) {
    cout.setf(ios::fixed);
    cout.precision(6);

    x *= M_PI / 180;
    x = sin(x);

    return x;
}

double cosine (double y) {
    cout.setf(ios::fixed);
    cout.precision(6);

    y *= M_PI / 180;
    y = cos(y);

    return y;
}

int main () {
    double  n;

    while (cin >> n) {
        cout << sine (n) << " " << cosine (n) << endl;
    }
}
