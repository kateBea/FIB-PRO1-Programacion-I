// P65437   SWAP

#include <iostream>
#include <cmath>
using namespace std;

void swap2(int& a, int& b) {
    int aux;
    aux = a;
    a = b;
    b = aux;
}

int main() {
    int x, y;

    cin >> x >> y;

    swap2(x,y);

    cout << x  << " " << y<< endl;

    return 0;
}
