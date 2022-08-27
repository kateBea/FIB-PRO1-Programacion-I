// P87801	WORLD SEARCH PUZZLE

#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<char> > MatrixChar;
typedef vector< vector<int> > MatrixInt;

bool testDirections(int x, int y, string word, const MatrixChar& matrix, 
	const MatrixInt& numbers, bool hor, int& score) { 

	int index = 0;
	int sz = word.size();
	int h = matrix.size();
	int w = matrix[0].size();
	bool ok = true;
	
	while (ok and index < sz)
		if (x != h and y != w and matrix[x][y] == word[index]) {
			++index;
			if (hor) ++x;
			if (not hor) ++y;
		} 
		else ok = false;
	
	
	if (index == sz) {
		int newScore = 0;
		while (index > 0) {
			--index;
			if (hor) --x;
			if (not hor) --y;
			newScore += numbers[x][y];
		}
		if (newScore > score) score = newScore;
		return true;
	}
	return false;
}

int main() {
	int a, b;
	while (cin >> a >> b){	
		MatrixChar matCh (a, vector<char> (b));
		MatrixInt matNum (a, vector<int> (b));
		
		for (int i = 0; i < a; ++i){
			for (int j = 0; j < b; ++j) {
				char c;
				cin >> c;
				matCh[i][j] = c;
			}
		}
		for (int i = 0; i < a; ++i){
			for (int j = 0; j < b; ++j) {
				int num;
				cin >> num;
				matNum[i][j] = num;
			}
		}
		
		int n;
		cin >> n;
		vector<string> words (n);
		for (int i = 0; i < n; ++i) {
			string in;
			cin >> in;
			words[i] = in;
		}
		
		for (int k = 0; k < n; ++k) {
			int score = 0;
			bool ok = false;
			for (int i = 0; i < a; ++i)
				for (int j = 0; j < b; ++j)
					if (matCh[i][j] == words[k][0]) {
						if (testDirections(i, j, words[k], matCh, matNum, true, score)) ok = true;
						if (testDirections(i, j, words[k], matCh, matNum, false, score)) ok = true;
					}
			
			
			if (ok) cout << score << endl;
			else cout << "no" << endl;
		}
	}

	return 0;
}