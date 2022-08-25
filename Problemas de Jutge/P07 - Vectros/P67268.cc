// P67268	REVERSE OF SEQUENCES

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int size;
	while (cin >> size) {
		bool z = true;
		vector<int> s(size);

		for (int val = 0; val < size; ++val) {
			int x;

			cin >> x;
			s[val] = x;
		}
		for (int i = size-1; i >= 0; --i) {
			if (not z) {
				cout << ' ';
			}

			cout << s[i];
			z = false;	
		}
		cout << endl;
	}

	return 0;
}
