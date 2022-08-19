// P89265	INTERVALS (3)

#include <iostream>
using namespace std;

int main() {
	int a1, b1, a2, b2;
	
	cin >> a1 >> b1 >> a2 >> b2;
	
	if (a1 == a2 and b1 == b2) 
		cout << "= , [" << a1 << ',' << b1 << ']' << endl;
	else if (b1 < a2 or a1 > b2) 
		cout << "?" << " , " << "[]" << endl;
	else if ((a1 >= a2 and b1 < b2) or (a1 > a2 and b1 <= b2)) 
		cout << "1" << " , " << '[' << a1 << ',' << b1 << ']' << endl;
	else if ((a2 >= a1 and b2 < b1) or (a2 > a1 and b2 <= b1)) 
		cout << "2" << " , " << '[' << a2 << ',' << b2 << ']' << endl;
	else if (a1 < a2 and b1 < b2) 
		cout << "?" << " , " << '[' << a2 << ',' << b1 << ']' << endl;
	else if (a1 > a2 and b1 > b2)
		cout << "?" << " , " << '[' << a1 << ',' << b2 << ']' << endl;

	return 0;
}
