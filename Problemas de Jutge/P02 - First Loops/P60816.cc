// P60816 REVERSED NUMBER IN HEXADECIMAL

#include <iostream>
using namespace std;

int main() {
	int n;
	int div;

	cin >> n;

	if (n == 0) {
		cout << 0 << endl;
	}
	
	if(n != 0) {
		while (n != 0) {
			div = n % 16;
			n /= 16;
			if (div > 9) 
				cout << char('A' + div - 10);
			else 
				cout << div;	
		}
		
		cout << endl;
	}
}
