// P89336	GIRANT LLISTA DE PARAULES (6)

#include <iostream>
using namespace std;

void swap(int& c) {
	string x;
	if (cin >> x) {
		c++;
		swap(c);

		if (c <= 0) 
			cout << x << endl;
		
		c -= 2;
	}
}

int main() {
	int c = 0;
	swap(c);

	return 0;
}
