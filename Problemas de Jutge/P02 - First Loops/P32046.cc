// P3046    CONTROL C202F

#include <iostream>
using namespace std;

int main() {
    int numero_entrada, numero_secuencia, total_iguales = 0;

    cin >> numero_entrada;

    cout << "nombres que acaben igual que " << numero_entrada << ":" << endl;

    while (cin >> numero_secuencia) {
        if (numero_entrada % 1000 == numero_secuencia % 1000) {
            cout << numero_secuencia << endl;
            ++total_iguales;
        }
    }
    cout << "total: " << total_iguales << endl;

    total_iguales = 0;

    return 0;
}