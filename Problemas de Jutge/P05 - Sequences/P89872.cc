// P89872	SECOND MAXIMUM WORD

#include <iostream>
using namespace std;

int main() {
	string max, max2, str, temp;

	cin >> max >> max2;

	if (max2 > max) {
		temp = max2;
		max2 = max;
		max = temp;
	}
	
	while (cin >> str) {
		if (str != max2 and str != max) {
			if (str > max2) {
				if (str > max) {
					max2 = max;
					max = str;
				} 
				else {
					max2 = str;
				}
			} 
			else if (max == max2) {
				max2 = str;
			}
		}
	}
	cout << max2 << endl;

	return 0;
}
