// P56549   CHANGES OF BASE

#include <iostream>
using namespace std;

void binari(int n);
void oct(int m);
void hexadecimal(int k);


int main() {
    int x;
    while (cin >> x) {
        cout << x << " = ";
        binari(x);
        cout << ", ";
        oct(x);
        cout << ", ";
        hexadecimal(x);
        cout << endl;
    }

    return 0;
}

void binari(int n) {
    if (n > 1) 
        binari(n / 2);

    cout << n % 2;
}

void oct(int m) {
    if (m >= 8) 
        oct(m / 8);
    
    cout << m % 8;
}

void hexadecimal(int k) {
    if (k >= 16) hexadecimal(k / 16);
    if (k % 16 == 10) cout << 'A';
    else if (k % 16 == 11) cout << 'B';
    else if (k % 16 == 12) cout <<'C';
    else if (k % 16 == 13) cout <<'D';
    else if (k % 16 == 14) cout <<'E';
    else if (k % 16 == 15) cout <<'F';
    else cout << k % 16;
}
