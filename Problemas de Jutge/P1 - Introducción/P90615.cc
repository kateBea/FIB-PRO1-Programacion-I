// P90615	MAXIMUM OF THREE INTEGER NUMBERS

#include <iostream>
using namespace std;


int main() {
	int x;
	int y;
	int z;

	cin >> x >> y >> z;

	if ((x==y and x>z and y>z) or (x>y and x>z) or (y==z and y<x and z<x) or (x==z and x>y and z>y)) {
		cout << x <<endl;
	}
	else if ((x==y and x<z and y<z) or (z>x and z>y)) {
		cout << z <<endl;
	}

	if ((y==z and y>x and z>x) or (y>x and y>z) or (x==z and x<y and z<y)) {
	    cout << y << endl;
	}
	else if (x==y and y==z) {
		cout << x << endl;
	}
}
