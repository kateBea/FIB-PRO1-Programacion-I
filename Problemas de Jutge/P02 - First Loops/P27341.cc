// P27341	CONTROL C202D

#include <iostream>
using namespace std;

int main() {
	int a, b;
	
	while(cin >> a >> b) {
		if(a > b) {
			cout << "suma dels cubs entre " << a << " i " << b << ": " << 0 << endl;	
		} 
		else {
			int suma = 0;

			for (int i = a; i <= b; i++) {
				suma += i * i * i;
			}

			cout << "suma dels cubs entre " << a << " i " << b << ": " << suma << endl;
		}
	}

	return 0;
}
