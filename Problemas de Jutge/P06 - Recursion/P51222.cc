// P51222	RECURSIVE NUMBER OF DIGITS

#include <iostream>
using namespace std;

int number_of_digits(int n) {
	if (n < 10) 
		return 1;
	
	return 1 + number_of_digits(n / 10);
}

int main () {
	int x;
	while (cin >> x) {
		cout << number_of_digits(x) << endl;
	}

	return 0;
}