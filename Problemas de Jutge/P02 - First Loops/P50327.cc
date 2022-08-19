// P50327	REVERSED NUMBER

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
			div = n % 10;
			n = n / 10;
			cout << div;
		}
	}
		
	cout << endl;
}
