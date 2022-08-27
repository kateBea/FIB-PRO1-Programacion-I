// P88905   PRODUCT OF MATRICES

#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;
typedef vector<int> Row;

Matrix product(const Matrix& a, const Matrix& b) {
    int c = a.size();
    int d = b[0].size();
    int colB = b.size();
    Matrix product(c, Row(d));

    for (int i = 0; i < c; ++i) {
       for (int j = 0; j < d; ++j) {
            for (int h = 0; h < colB; ++h) 
                product[i][j] += a[i][h] * b[h][j];
        }
    }

    return product;
}

int main() {
    int n;
    int N;
    cout << "Type size of matrix A: ";

    cin >> n >> N;

    Matrix M1(n, Row(N));

    cout << "Fill matrix A" << endl;

    for (int m1 = 0; m1 < n; ++m1) {
        for (int n1 = 0; n1 < N; ++n1) 
            cin >> M1[m1][n1];
    }

    cout << endl;

    int u;
    int v;

    cout << "Type size of matrix B: ";

    cin >> u >> v;

    Matrix M2(u, Row(v));

    cout << "Fill matrix B" << endl;

    for (int m2 = 0; m2 < u; ++m2) {
        for (int n2 = 0; n2 < v; ++n2) 
            cin >> M2[m2][n2];
    }

    cout << endl;

    Matrix prod_result = product(M1, M2);
    int fila = prod_result.size();
    int columna = prod_result[0].size();

    for (int out_f = 0; out_f < fila; ++out_f) {
        for (int out_c = 0; out_c < columna; ++out_c) 
            cout << prod_result[out_f][out_c] << ' ';

        cout << endl;
    }

    return 0;
}
