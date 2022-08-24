// X50141	FUNCIÓN PARA ENGROSAR NÚMEROS

#include <iostream>
using namespace std;

int engrosa(int x) {
	if (x < 10) 
		return x;

	int e = engrosa(x / 10);
	int ue = e % 10;
	int d = x % 10;
	int m = max(ue, d);

	return e * 10 + m;
}

int main() {
    int m;
    cin >> m;
    cout << engrosa(m) << endl;

	return 0;
}
