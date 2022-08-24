// P96965   REDUCCIÓ DE DÍGITS

#include <iostream>
using namespace std;

int reduccio_digits(int x);

int main() {
    int number;
    cin >> number;
    cout << reduccio_digits(number) << endl;
    
    return 0;
}

int reduccio_digits(int x) {
    if (x < 10) 
        return x;
    
    return reduccio_digits(x % 10 + x / 10);
}


