// P42596	CONTROL C401B

#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matrix;

int max_pos(const vector<int>& t) {
	int max_pos = 1, max_value = t[0];
	int g = t.size();
	for (int i = 0; i < g; ++i) {
		if (t[i] > max_value) {
			max_value = t[i];
			max_pos = i+1;
		}
	}
	return max_pos;	
}

void min_max(const Matrix& mat, int& minimum, int& maximum) {
	minimum = maximum = mat[0][0];

	int x = mat.size();
	int y = mat[0].size();

	for (int i = 0; i < x; ++i) {
		for (int j = 0; j < y; ++j) {
			if (mat[i][j] > maximum) maximum = mat[i][j];
			if (mat[i][j] < minimum) minimum = mat[i][j];
		}
	}
}

int main() {
	int n;
	int m;
	int dif_value = 0;
	vector<int> dif;

	while (cin >> n >> m) {
		Matrix elem(n, vector<int> (m));
		for (int l1 = 0; l1 < n; ++l1) {
			for (int l2 = 0; l2 < m; ++l2) 
				cin >> elem[l1][l2];
		}
		int min = elem[0][0];
		int max = elem[0][0];

		min_max(elem, min, max);
		dif_value = max-min;
		dif.push_back(dif_value);
	}
	int first_max = max_pos(dif);
	cout << "la diferencia maxima es " << dif[first_max-1] << endl;
	cout << "la primera matriu amb aquesta diferencia es la " << first_max << endl;

	return 0;
}