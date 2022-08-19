// P42280   CHESS BOARD(1)

#include <iostream>
using namespace std;

int main() {
    int r, c, total = 0;
    char ch;

    cin >> r >> c;

    for(int row = 1; row <= r; row++)
        for(int col = 1; col <= c; col++) {
            cin >> ch;
            total += ch - '0';
        }

    cout << total << endl;

    return 0;
}
