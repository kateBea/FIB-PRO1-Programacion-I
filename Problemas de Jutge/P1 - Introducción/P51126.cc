// P51126   INTERVALS (1)

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    if(a <= c and (b - c) >= 0) {
        if (d <= b)      cout << '[' << c << ',' << d << ']'<< endl;
        else if (b < d)  cout << '[' << c << ',' << b << ']' << endl;
    }
    else if(c < a and (d - a) >= 0) {
        if (d <= b)     cout << '[' << a << ',' << d << ']'<< endl;
        else if (b < d) cout << '[' << a << ',' << b << ']' << endl;
    }
    else {
        cout << "[]" << endl;
    }

    return 0;
}