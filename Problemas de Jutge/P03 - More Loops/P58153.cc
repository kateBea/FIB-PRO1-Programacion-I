// P58153   HARMONIC NUMBERS(2)

#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(10);

    double n, m;

    while (cin >> n >> m) {
        
        double H = 0;
        for (double i = m+1; i <= n; i++) {
            H += 1 / i;
        }
        cout << H << endl;
    }

    return 0;
}
