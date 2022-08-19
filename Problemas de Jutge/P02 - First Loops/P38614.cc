// P38614   CONTROL C201A

#include <iostream>
using namespace std;

int main() {
    int n, aux, suma = 0, indice = 0, posicion = 1;

    cin >> n;

    aux = n; 

    while (n != 0) { 
        if (indice + 1 == posicion and posicion%2 != 0) {
            suma += n % 10;
        }

        n /= 10;
        ++indice;
        ++posicion;
    }
    if (suma % 2 == 0) {
        cout << aux << " IS COOL" << endl;
    }
    else 
        cout << aux << " IS NOT COOL" << endl; 

    return 0;
}
