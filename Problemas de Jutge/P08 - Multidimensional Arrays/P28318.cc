// P28318   ROWS AND COLUMNS

#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matriz;

int main() {
    int numFil, numCol;
    cin >> numFil >> numCol;

    Matriz my_matrix(numFil, Row(numCol));
    for (int i = 0; i < numFil; ++i) {
        for (int j = 0; j < numCol; ++j) 
            cin >> my_matrix[i][j];
    }

    string s;
    int fila;
    int col;

    while (cin >> s) {
        if (s == "row") {
            cin >> fila;

            cout << "row " << fila << ':';

            for (int u = 0; u < numCol; ++u) 
                cout << ' ' << my_matrix[fila - 1][u];

            cout << endl;
        }
        else if (s == "column") {
            cin >> col;
            cout << "column " << col << ':';

            for (int h = 0; h < numFil; ++h) 
                cout << ' ' << my_matrix[h][col - 1];

            cout << endl;
        }
        else {
            cin >> fila >> col;
            cout << "element " << fila << ' ' << col << ": ";
            cout << my_matrix[fila - 1][col - 1] << endl;
        }
    }

    return 0;
}
