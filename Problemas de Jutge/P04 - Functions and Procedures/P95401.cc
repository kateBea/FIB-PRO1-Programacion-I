// P95401   FUNCTION FOR LEAP YEARS

#include <iostream>
#include <cmath>
using namespace std;

bool is_leap_year(int year) {
    return ((year % 4 == 0) 
        and (year % 100 != 0)) 
        or (year % 400 == 0);
}

int main() {
    int year;

    cin >> year;

    cout << is_leap_year(year) << endl;

    return 0;
}
