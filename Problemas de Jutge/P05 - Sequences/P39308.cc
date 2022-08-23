// P39308	DIVISORS IN ORDER

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, div;
	
	while (cin >> n) {
		cout << "divisors of " << n << ':';
        for (int div = 1; div <= sqrt(n); ++div) {
			//divisors greater than square root of n
            if (n % div == 0) 
				cout << ' ' << div;
        }
		for (int i = sqrt(n); i > 0; --i) {
			//divisors smaller than square root of n
			if ((n % i == 0) and (i != n / i)) 
				cout << ' ' << n / i;
		}
		cout << endl;
	}

	return 0;
}