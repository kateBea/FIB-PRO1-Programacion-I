// P12509   RECURSIVE FACTORIAL

#include <iostream>
using namespace std;

int factorial(int n);

int main() { 
    int m;
    cin >> m;
    cout << factorial(m) << endl;

    return 0;
}

int factorial(int n) {
    if (n == 0) 
        return 1;
    
    return n * factorial(n-1);
}
