// P24381   PRINT A CROSS

#include <iostream>
using namespace std;

void cross(int n, char c) {
    for (int fila = 1; fila <= n; ++fila) {
        // si esta en la fila de en medio imprimira 
        // tantas char como n indica
        if (fila == ((n + 1) / 2)) {
            for (int j = 0; j < n; ++j) {
                cout << c;
            }
            cout << endl;
        }
        else {
        // si no esta en la fila de en medio imprimir 
        // espacios hasta que se llegue a la columna de enmedio
            int col = 1;
            
            while (col < ((n + 1) / 2)) {
                cout << " ";
                ++col;
            }
            cout << c;
            cout << endl;
        }
    }
}

int main() {
    int number;

    char ch;

    cin >> number >> ch;

    cross(number, ch);

    return 0;
}
