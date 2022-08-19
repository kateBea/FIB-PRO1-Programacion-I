// P33839   SUM OF DIGITS

#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    while(cin >> n) {
        cout << "The sum of the digits of " << n << " is ";
        if(n == 0) {
            cout << 0 << "." << endl;
        }
        else { 
            while(n != 0) {
                sum = sum + n%10;
                n = n / 10;
            }
            cout << sum << "." << endl; 
        }   
        sum = 0;
    }

    return 0;
}
