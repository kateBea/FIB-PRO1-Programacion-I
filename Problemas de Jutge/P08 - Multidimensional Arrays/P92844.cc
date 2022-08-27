// P92844	BOUNDING RECTANGLE

#include <iostream>
#include <vector>
using namespace std;

typedef vector <char>Row;
typedef vector <Row>Rectangle;

void minimal_dimensions(char c, const Rectangle& r, int& fils, int& cols) {
	fils = 1;
	cols = 1;

	int k = 0;
	int imax = 0;
	int jmax = 0;
	bool iminima = false;
	int imin = r.size() - 1;
	int jmin = r[0].size() - 1;

	while (not iminima and k < r.size()) {
		int j = 0;
		while (not iminima and j < r[0].size()) {
			if (r[k][j] == c) {
				imin = k;
				iminima = true;
			}
			++j;
		}
		++k;
	}

	bool jminima = false;
	int m = 0;

	while (not jminima and m < r[0].size()) {
		int i = 0;
		while (not jminima and i < r.size()) {
			if (r[i][m] == c) {
				jmin = m;
				jminima = true;
			}
			++i;
		}
		++m;
	}
	bool imaxima = false;
	int i = r.size() - 1;
	while (not imaxima and i >= 0) {
		int j = r[0].size() - 1;
		while (not imaxima and j >= 0) {
			if (r[i][j] == c) {
				imax = i;
				imaxima = true;
			}
			--j;
		}
		--i;
	}

	bool jmaxima = false;
	int j = r[0].size() - 1;
	while (not jmaxima and j >= 0) {
		int l = r.size() - 1;
		while (not jmaxima and l >= 0) {
			if (r[l][j] == c) {
				jmax = j;
				jmaxima = true;
			}
			--l;
		}
		--j;
	}

	cols += jmax - jmin;
	fils += imax - imin;
}