// P34451	CONTROL C201C

#include <iostream>
using namespace std;

int main() {
	int x, y, mult = 0;

	cin >> x;
	
	while(cin >> y) {
		if((y % x) == 0) ++mult;
	}

	cout << mult << endl;

	return 0;
}
