// X01646	SUMA DE DÍGITOS (2)

#include <iostream>
using namespace std;

int main() {
	int base, numero, suma = 0;
	cin >> base;
	
	while (cin >> numero) {
		if(base == 10) {
			cout << numero << ": ";
			while (numero != 0) {
				suma += numero%10;
				numero /= 10;
			}
			
			cout << suma << endl; 
			suma = 0;
		}
		else {
			cout << numero << ": ";
			while (numero != 0) {
				suma += numero % base;
				numero /= base;
			}
			cout << suma << endl; 
			suma = 0;
		}
	}

	return 0;
}
