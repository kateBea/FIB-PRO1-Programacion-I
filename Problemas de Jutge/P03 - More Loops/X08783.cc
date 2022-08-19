// X08783   CUÁNTAS CIFRAS

#include <iostream>
using namespace std;

int main() {
    int b, n;
    int count;

    while(cin >> b >> n) {
        for(int i = 0; i <= b; i++) {
            while(n != 0) {
                n /= b;
                ++count;
            }
        }
        cout << count << endl; 
        count = 0;
    }

    return 0;
}
