// P27498   TRANSPOSED MATRIX

#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;

void swap(int& a, int& b) {
    int aux = a;
    a = b;
    b = aux;
}

void transpose(Matrix& m) {
    int t = m.size();
    for (int d = 0; d < (t - 1); ++d) {
        for (int y = d + 1; y < t; ++y) {
            swap(m[d][y], m[y][d]);
        }
    }
}

int main() {
    int r, c;

    cin >> r >> c;

    Matrix tras(r, vector<int> (c));

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) 
            cin >> tras[i][j];
    }
    
    transpose(tras);

    for (int h = 0; h < r; ++h) {
        for (int u = 0; u < c; ++u) 
            cout << tras[h][u] << ' ';

        cout << endl;
    }

    return 0;
}
