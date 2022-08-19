// P31170   MULTIPLICATION TABLE

#include <iostream>
using namespace std;

int main() {
    int n, x;

    x = 0;

    cin >> n;

    while (x < 10) {
        x = x + 1;
        cout << n << '*' << x << " = " << (n * x) << endl;
    }
}