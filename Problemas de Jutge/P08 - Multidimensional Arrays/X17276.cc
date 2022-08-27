// X17276	DIAGONALES CRECIENTES

#include <iostream>
#include <vector>
using namespace std;

typedef vector <int>Row;
typedef vector <Row>Matrix;

bool increasing_d(const Matrix& M, int a, int b) {
	int f = M.size();
	int c = M[0].size();
	int i = a-1, j = b+1, comp = M[a][b];

	while (i >= 0 and j < c) {
		if (M[i][j] > comp) comp = M[i][j];
		else return false;
		--i;
		++j;
	}

	i = a-1, j = b-1, comp = M[a][b];
	while (i >= 0 and j >= 0) {
		if (M[i][j] > comp) comp = M[i][j];
		else return false;
		--i;
		--j;
	}

	i = a+1, j = b-1, comp = M[a][b];
	while (i < f and j >= 0) {
		if (M[i][j] > comp) comp = M[i][j];
		else return false;
		++i;
		--j;
	}

	i = a+1, j = b+1, comp = M[a][b];
	while (i < f and j < c) {
		if (M[i][j] > comp) 
			comp = M[i][j];
		else 
			return false;

		++i;
		++j;
	}
	return true;
}

int main() {
	int f;
	int c;
    
	while (cin >> f >> c) {
        Matrix M(f, Row(c));
        for (int i = 0; i < f; ++i) {
            for (int j = 0; j < c; ++j) {
                cin >> M[i][j];
            }
        }
		cin >> f >> c;
		if (increasing_d(M, f, c)) 
			cout << "si" << endl;
		else if (not increasing_d(M, f, c)) 
			cout << "no" << endl;
	}

	return 0;
}
