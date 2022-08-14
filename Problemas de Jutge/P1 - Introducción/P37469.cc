// P37469   TIME DECOMPOSITION (1)

#include <iostream>
using namespace std;

int main() {
    int n, h, m, s;

    cin >> n;

    if (n >= 0) {
        h = n / 3600;
        m = (n % 3600) / 60;
        s = (n % 3600) % 60;
        cout << h << " " << m << " " << s << endl;
    }

    return 0;
}