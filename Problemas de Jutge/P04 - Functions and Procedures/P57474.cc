// P57474   ITERATIVE FACTORIAL

#include <iostream>
using namespace std;

int factorial(int n) {
    int product = 1;

    for (int i = 1; i <= n; i++) {
        product *= i;
    }

    return product;
}

int main() {
    int x;

    while (cin >> x) {
        cout << factorial(x) <<endl;
    }

    return 0;
}
