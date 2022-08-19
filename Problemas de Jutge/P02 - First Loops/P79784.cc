// P79784	MOVEMENTS ON THE GROUND

#include <iostream>
using namespace std;

int main(){
	int a = 0, b = 0;
	char dirx;
	
	while (cin >> dirx) {
		if (dirx == 'n') --b;
		if (dirx == 's') ++b;
		if (dirx == 'e') ++a;
		if (dirx == 'w') --a;
	}
	
	cout << '(' << a << ", " << b << ')' << endl;

	return 0;
}
