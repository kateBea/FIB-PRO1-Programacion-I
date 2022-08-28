// P85696	RATIONAL NUMBERS (1)

#include <iostream>
#include <vector>
using namespace std;

struct Rational {
	int num, den;
};

void canvia_signe(int& x, int& y) {
	y *= -1;
	x *= -1;
}

int mcd(int a, int b) {
	if (b == 0) {
		if (a < 0) 
			return a * (-1);
		else 
			return a;
	}
	else return mcd(b, a % b);
}

Rational rational(int n, int d) {
	Rational result;
	if (n == 0) {
		result.num = 0;
		result.den = 1;
		return result;
	}
	else {
		int val = mcd(n, d);
		result.num = n / val;
		result.den = d / val;

		if ((result.num < 0 and result.den < 0) or result.den < 0) 
			canvia_signe(result.num, result.den);
		return result;
	}
}

int main() {
	Rational input;
	cin >> input.num >> input.den;
	cout << rational(input.num, input.den).num << ' ' 
		<< rational(input.num, input.den).den << endl;

	return 0;
}
