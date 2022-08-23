// P55307	P0003. FRIEND NUMBERS

#include <iostream>
using namespace std;

int sumaDiv(int a);
bool friends(int num1, int num2);

int main() {
	int x, y;
	bool primer = true;

	while (cin >> x >> y) {
		if (friends(x, y)) {
			if (not primer) 
				cout << ',';

			cout << '(' << x << ' ' << y << ')';
			primer = false;
		}
	}

	cout << endl;

	return 0;
}

int sumaDiv(int a) {
	int div = a / 2;
	int sum = 0;
	
	while (div > 0) {
		if (a % div == 0) sum += div;
		--div;
	}

	return sum;
}

bool friends(int num1, int num2) {
	return (num1 != num2 and sumaDiv(num1) == num2 and sumaDiv(num2) == num1);
}
