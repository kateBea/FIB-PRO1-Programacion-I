// P22467   PERFECT PRIMES

#include <iostream>
using namespace std;

bool prime(int a) {
    if (a <= 1) return false;
    for (int i = 2; i * i <= a; ++i) {
        if (a % i == 0) 
            return false;
    }
    return true;
}

bool is_perfect_prime(int n) {
    if (not prime(n)) 
        return false;

    int result = 0;
    int digits = 0;

    while (n > 0) {
        result = result + (n % 10);
        n = n / 10;
        ++digits;
    }

    bool prime_result = prime(result);

    if (prime_result and digits == 1) 
        return true;
    else if (prime_result) 
        return is_perfect_prime(result);
    else 
        return false;
}

/*

// For testing purposes

int main() {
    int n;
    while (cin >> n) {
        cout << is_perfect_prime(n) << endl;
    }

    return 0;
}
*/