// P59539   HARMONIC NUMBERS (1)

#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(4);

    int n;
    double fraccion = 0;
    double suma = 0;

    cin >> n;

    for(double i = 1; i <= n; i++){
        fraccion = 1 / i;
        suma = fraccion + suma;
    }
    
    cout << suma << endl;
    
    return 0;
}