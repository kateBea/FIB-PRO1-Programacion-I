// P99182	PROMEDIO

#include <iostream>
using namespace std;

int main() {
	double x, y;
	cin >> x >> y;
	if ((x >= -1000 and x <=1000) and 
		(y >= -1000 and y <= 1000)){
	    cout << (x+y)/2 << endl;
	}
}