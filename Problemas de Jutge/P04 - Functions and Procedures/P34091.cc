// P34091   PERFECT NUMBERS

#include <iostream>
using namespace std;


bool is_perfect(int n) {
    int suma_factors = 1;

    if (n < 2) 
        return false;
    else {
        int factor = 2;

        for (factor = 2; factor * factor < n; ++factor) {
            if (n % factor == 0) 
                suma_factors += factor + n / factor;
        }

        if (factor * factor == n) 
            suma_factors = suma_factors + factor;
    }

    return (n == suma_factors);
}

int main() {
    int number;

    while (cin >> number) {
        cout << is_perfect(number) << endl;
    }

    return 0;
}
