// P73231	MAXIMUM OF FOUR INTEGER NUMBERS

#include <iostream>
using namespace std;

int max4(int a, int b, int c, int d) {
	if (a >= b and a >= c and a >= d)	
		return a;
	else if (b >= c and b >= d)			
		return b;
	else if (c >= d)					
		return c;
	else								
		return d;
}
int main() {
	int x, y, z, w;

	while (cin >> x >> y >> z >> w) {
		cout << max4(x, y, z, w) << endl;
	}

	return 0;
}
