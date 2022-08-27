// P16893	IS IT THE SOLUTION OF A SUDOKU ?

#include <iostream>
#include <vector>
using namespace std;

bool es_valid(vector <vector <int> >& sudoku) {
	int xnum, ynum;

	for (int i = 0; i < 9; ++i) {
		vector <bool>xpresent(9, false);
		vector <bool>ypresent(9, false);
		for (int j = 0; j < 9; ++j) {
			xnum = sudoku[i][j];
			if (!xpresent[xnum - 1]) 
				xpresent[xnum - 1] = true;
			else 
				return false;

			ynum = sudoku[j][i];
			if (!ypresent[ynum - 1]) 
				ypresent[ynum - 1] = true;
			else 
				return false;
		}
	}

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			vector <bool>present(9, false);

			for (int k = 3 * i; k < (3 * i + 3); ++k) {
				for (int l = 3 * j; l < (3 * j + 3); ++l) {
					int num = sudoku[k][l];

					if (!present[num - 1]) 
						present[num - 1] = true;
					else 
						return false;
				}
			}
		}
	}
	return true;
}

int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; ++i) {
		vector <vector <int> >sudoku(9, vector <int>(9));

		for (int j = 0; j < 9; ++j) {
			for (int k = 0; k < 9; ++k) 
				cin >> sudoku[j][k];
		}

		if (es_valid(sudoku)) 
			cout << "yes" << endl;
		else 
			cout << "no" << endl;
	}

	return 0;
}