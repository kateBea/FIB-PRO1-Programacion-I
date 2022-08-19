// P55622   NUMBER OF DIGITS (1)

#include <iostream>
using namespace std;

int main() {
    int n;
    int c = 0;
    int s = 0;
    int b = 0;
    int v = 0;

    cin >> n;

    s = n;
    v = b + n;

    while(v > 0) {
        v = v / 10;
        c++;
    }

    if (n == b) {
        c++;
    }

    cout << "The number of digits of " << s << " is " << c << '.' << endl;

    return 0;
}