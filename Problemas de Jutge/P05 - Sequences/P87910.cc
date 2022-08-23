// P87910	CONTROL C302F

#include <iostream>
using namespace std;

void fast(string a, int& b) {
	b -= a.length();

	if (b <= 0) 
		cout << a << endl;
	else 
		cout << a;
}


void morse(char c, int& n) {
	if (c == 'e') fast(".", n);

	else if (c == 'a') fast(".-", n);
	else if (c == 'i') fast("..", n);

	else if (c == 'o') fast("---", n);
	else if (c == 'u') fast("..-", n);
}

int main() {
	int n0, num;
	char x;
	bool end;

	cin >> n0;

	num = n0;

	while (cin >> x) {
		morse(x, n0);
		if (n0 <= 0) {
			n0 = num;
			end = false;
		} else end = true;
	}
	if (end) {
		cout << endl;
	}
	
	cout << "STOP" << endl;

	return 0;
}
