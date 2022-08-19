// P97156   NUMBERS IN AN INTERVAL

#include <iostream>
using namespace std;

int main() {
    int a,b;

    cin >> a >> b;

    while(a < b) {
        cout << a << ",";
        a = a + 1;
    }

    if(a <= b) 
        cout << b;

    cout << endl;

    return 0;
}