// X00639   COMPARANDO FRACCIONES

#include <iostream>
using namespace std;

bool c_frac(int n1, int d1, int n2, int d2) {
    return ((n1 * d2) < (n2 * d1));
}


int main() {
    int x, y, z, w;
    while (cin >> x >> y >> z >> w) {
        cout << c_frac(x, y, z, w) << endl;
    }

    return 0;
}
