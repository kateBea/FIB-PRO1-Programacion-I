// P55722   ITERATIVE NUMBER OF DIGITS

#include <iostream>
using namespace std;

int number_of_digits(int n) {
    int numero_de_digitos = 0;

    if (n == 0) {
       return 1;
    }
    else {
        while (n != 0) {
            n /= 10;
            ++numero_de_digitos;
        }

        return numero_de_digitos;
    }
}

int main() {
    int x;

    cin >> x;

    cout << number_of_digits(x) << endl;

    return 0;
}
