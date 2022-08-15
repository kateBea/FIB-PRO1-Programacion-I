// P97969	COUNTING A'S (1)

#include <iostream>
using namespace std;

int main() {
	char c;
	int count = 0;

	cin >> c;
	
	while (c != '.') {
		if (c == 'a') ++count;

		cin >> c;
	}

	cout << count << endl;

	return 0;
}
