// P77686   PALINDROMIC NUMBERS

#include <iostream>
using namespace std;

bool is_palindromic(int n) {
    int aux = 0;
    int aux2 = 0;

    aux = aux2 = n;

    int contador = 0;
    int base = 1;
    int reversed_number = 0;

    if (n == 0) {
        return true;
    }
    else {
        while (n != 0) {
            n /= 10;
            ++contador;
        }

        //cuantas cifras hay (cuantos 0 tiene que haber despues de 1 del base)
        for (int i = 1; i < contador; i++) 
            base *= 10;

        while (aux != 0) {
            reversed_number += (aux % 10) * base;
            base /= 10;
            aux /= 10;
        }
        if (reversed_number == aux2) return true;
    }
    return false;
}

int main() {
    int x;

    while (cin >> x) {
        cout << is_palindromic(x) << endl;
    }

    return 0;
}
