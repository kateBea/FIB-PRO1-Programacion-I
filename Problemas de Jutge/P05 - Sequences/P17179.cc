// P17179	STATISTICAL MEASURES

#include <iostream>
using namespace std;

int main () {
	cout.setf(ios::fixed);
	cout.precision(4);
	
	int ln;

	cin >> ln;

	for (int i = 0; i < ln; ++i) {
		int m;
		double mn;
		double mx;
		double total;
		double number;

		cin >> m;
		
		cin >> number;

		mx = mn = total = number;

		for (int s = 0; s < (m - 1); ++s) {
			cin >> number;

			if (number >= mx) 
				mx = number;
			if (number < mn) 
				mn = number;

			total += number;
		}
		cout << mn << " " << mx << " " << (total / m) << endl;	
	}

	return 0;
}