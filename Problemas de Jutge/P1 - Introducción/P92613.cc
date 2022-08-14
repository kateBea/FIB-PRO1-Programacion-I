// P92613   ROUNDING

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(0);

    double x;
    cin >> x;

    cout << floor(x) << ' ';
    cout << ceil(x) << ' ';

    if((x - int(x)) == 0.5) {
        cout << ceil(x) << endl;
    }
    else {
        cout << x << endl;
    }

    return 0;
}