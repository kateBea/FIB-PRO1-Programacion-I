// P45829	FIELDS

#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Camp;

int main() {
	int m, n;
	while (cin >> m >> n) {
		Camp camp(m, vector<int>(n));

		for (int f = 0; f < m; ++f) 
			for (int c = 0; c < n; ++c) 
				cin >> camp[f][c];

		int conreus = 0;

		for (int f = 0; f < m; ++f) {
			for (int c = 0; c < n; ++c) {
				if (camp[f][c] != 0) {
					++conreus;
					int i = f;
					while (i < m and camp[i][c] != 0) {
						int j = c;
						while (j < n and camp[i][j] != 0) {
							camp[i][j] = 0;
							++j;
						}
						++i;
					}
				}
			}
		}
		cout << conreus << endl;
	}

	return 0;
}