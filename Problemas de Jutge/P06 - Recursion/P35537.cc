// P35537   INCREASING NUMBERS

#include <iostream>
using namespace std;

bool is_increasing(int n);

int main() {
    int number;
    cin >> number;
    cout << is_increasing(number) << endl;
    
    return 0;
}

bool is_increasing(int n) {
    if (n <= 1) 
        return true;
    else if ((n % 10) >= ((n / 10) % 10)) 
        return is_increasing(n/10);
    
    return false;
}
