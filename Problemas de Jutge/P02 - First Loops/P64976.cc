// P64976   CONTROL C201B

#include <iostream>
using namespace std;

int main() {
    int n;
    int i;

    cin >> n;

    for (i = 1; i <= n; ++i) {
        cout << n << " x " <<  i << " = " << (n * i) << endl;
    }

    return 0;
}