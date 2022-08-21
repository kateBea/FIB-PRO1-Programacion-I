// P22654   TIME DECOMPOSITION (2)

#include <iostream>
using namespace std;


void decompose(int n, int& h, int& m, int& s) {
    h = n / 3600;
    m = (n % 3600) / 60;
    s = (n % 3600) % 60;
}

int main() {
    int x, y, z, t;

    cin >> x;

    decompose(x, y, z, t);

    cout << y << " " << z << " " << t << endl;

    return 0;
}
