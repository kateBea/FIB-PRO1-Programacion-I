// P89078	FIRST POSITION

#include <iostream>
using namespace std;

int main() {
	int x, posicion = 0, contador = 0;
	while (cin >> x and posicion == 0) {
		++contador;
		if (x % 2 == 0) 
			posicion = contador;
	}
	cout << posicion << endl;

	return 0;
}
