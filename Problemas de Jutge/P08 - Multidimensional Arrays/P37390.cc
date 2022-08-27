// P37390   PRODUCT OF SQUARE MATRICES

#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;
typedef vector<int> Row;

Matrix product(const Matrix& a, const Matrix& b) {
    int nxn = a.size();
    Matrix product(nxn, Row(nxn));

    for (int i = 0; i < nxn; ++i) {
        for (int j = 0; j < nxn; ++j) {
            for (int h = 0; h < nxn; ++h) 
                product[i][j] += a[i][h] * b[h][j];
        }
    }
    
    return product;
}

int main() {
    int n;
    cout << "Type matrix size: ";
    cin >> n;

    Matrix M1(n, Row(n));
    Matrix M2(n, Row(n));

    cout << "Fill both matrix" << endl;

    for (int m1 = 0; m1 < n; ++m1) {
        for (int n1 = 0; n1 < n; ++n1) 
            cin >> M1[m1][n1];
    }
    cout << endl;
    for (int m2 = 0; m2 < n; ++m2) {
        for (int n2 = 0; n2 < n; ++n2) 
            cin >> M2[m2][n2];
    }

    cout << endl;

    Matrix prod_result = product(M1, M2);

    for (int out_f = 0; out_f < n; ++out_f) {
        for (int out_c = 0; out_c < n; ++out_c) 
            cout << prod_result[out_f][out_c] << ' ';

        cout << endl;
    }

    return 0;
}
