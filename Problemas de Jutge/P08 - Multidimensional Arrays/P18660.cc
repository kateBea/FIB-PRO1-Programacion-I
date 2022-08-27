// P18660	WORD SEARCH

#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<char> > Matrix;

void MakeUppercase(char& c) {
	if (c >= 'a' and c <= 'z') 
		c += 'A' - 'a';
}

char lowerCase(char c) {
	if (c >= 'A' and c <= 'Z') 
		return c - 'A' + 'a';
	
	return c;
}

void testDirections (int x, int y, string word, Matrix& matrix, bool hor, bool vert) {
	int index = 0;
	int sz = word.size();
	int h = matrix.size();
	int w = matrix[0].size();
	bool ok = true;
	
	while (ok and index < sz)
		if (x != h and y != w and lowerCase(matrix[x][y]) == word[index]) {
			++index;
			if (hor) ++x;
			if (vert) ++y;
		} else ok = false;
	
	if (index == sz)
		while (index > 0){
			--index;
			if (hor) --x;
			if (vert) --y;
			MakeUppercase (matrix[x][y]);
		}
}

void findWord (string word, Matrix& matrix) {
	int h = matrix.size();
	int w = matrix[0].size();
	for (int i = 0; i < h; ++i)
		for (int j = 0; j < w; ++j)
			if (lowerCase(matrix[i][j]) == word[0]) {
				testDirections(i, j, word, matrix, true, false);
				testDirections(i, j, word, matrix, false, true);
				testDirections(i, j, word, matrix, true, true);
			}
}

int main() {
	int n;
	bool primer = true;
	while (cin >> n){
		int a, b;
		cin >> a >> b;
		
		vector<string> words (n);
		for (int i = 0; i < n; ++i){
			string in; 
			cin >> in;
			words[i] = in;
		}
		
		Matrix matrix (a, vector<char> (b));
		
		for (int i = 0; i < a; ++i){
			for (int j = 0; j < b; ++j){
				char c;
				cin >> c;
				matrix[i][j] = c;
			}
		}
		
		for (int i = 0; i < n; ++i) findWord(words[i], matrix);
		
		if (primer) primer = false;
		else cout << endl;
		
		for (int i = 0; i < a; ++i) {
			for (int j = 0; j < b; ++j) {
				if (j > 0) 
					cout << ' ';
					
				cout << matrix[i][j];
			}
			cout << endl;
		}
	}

	return 0;
}