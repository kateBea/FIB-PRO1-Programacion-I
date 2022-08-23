// P50095   NEXT PRIME NUMBER

#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) 
        return false;

    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) 
            return false;
    }

    return true;
}

int main () {
    int number;
    while (cin >> number and isPrime(number)) {
        bool trobat = false;
        while (not trobat) {
            ++number;
            trobat = isPrime(number);
        }
        cout << number << endl;
    }

    return 0;
}