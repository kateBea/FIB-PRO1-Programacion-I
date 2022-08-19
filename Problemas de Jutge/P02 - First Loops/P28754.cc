// P28754 REVERSED NUMBER IN BINARY

#include <iostream>
using namespace std;

int main() {
	int n;
	int div;

	cin >> n;

	if (n == 0) 
		cout << 0;
	else {
		while (n >= 1) {
			div = n % 2;
			n = n / 2;
			cout << div;
		}
	}
	
	cout << endl;

	return 0;
}
