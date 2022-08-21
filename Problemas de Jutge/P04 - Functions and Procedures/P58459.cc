// P58459 VALID DATES

#include <iostream>
using namespace std;

bool is_valid_date(int d, int m, int y);
bool is_leap_year(int year);

int main() {
	int x, y, z;

	while (cin >> x >> y >> z) {
		cout << is_valid_date(x,y,z) << endl;
	}
}

bool is_leap_year(int year) {
	bool is_leap_year = false;
    if (year%4 == 0 and year%100 != 0) 
		is_leap_year = true;
    else if (year%100 == 0 and year%400 == 0) 
		is_leap_year = true;

	return is_leap_year;
}

bool is_valid_date(int d, int m, int y) {
	bool valid = false;

	if (m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12) 
		valid = (d > 0 and d < 32);
	else if (m == 4 or m == 6 or m == 9 or m == 11) 
		valid = (d > 0 and d < 31);
	else if (m == 2) {
		if (d > 0 and d <= 28 and is_leap_year(y) == false) 
			valid = true;
		else if (d > 0 and d <= 29 and is_leap_year(y) == true) 
			valid = true;
		else 
			valid = false;
	}

	return valid;
}

