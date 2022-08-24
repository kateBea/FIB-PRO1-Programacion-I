// P38877	GIRANT LLISTA DE PARAULES (4)
#include <iostream>
using namespace std;

void swap(int& n) {
	string x;
	if (cin >> x) {
		swap(n);
		if (n != 0) {
			cout << x << endl;
			n--;
		}
	}
}

int main() {
	int n;
	cin >> n;
	swap(n);

	return 0;
}
