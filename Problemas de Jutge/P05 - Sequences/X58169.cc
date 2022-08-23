// X58169	POSICIONES DE UN MÁXIMO DE DOS SECUENCIAS

#include <iostream>
using namespace std;

void infoSecuencia(int& max, int& lpos) {
	if (lpos > max) 
		max = lpos;
}

int main() {
	int n1, n0, c = 0, p1 = 0, mx = 0, n2, p2 = 1;

	while (cin >> n1 and n1 != 0) {
		n0 = n1;
		infoSecuencia(mx, n0);
		c++;
		if (mx == n0) 
			p1 = c;
	}
	while (cin >> n2 and n2 != mx and n2 != 0) 
		p2++;

	cout << mx << ' ' << p1 << ' ';

	if (n2 == mx) 
		cout << p2 << endl;
	else 
		cout << '-' << endl;

	return 0;
}
