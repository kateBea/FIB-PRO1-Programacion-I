// P85370   INTEREST (1)

#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main() { 
    cout.setf(ios::fixed);
    cout.precision(4);

    double c;       // capital inicial
    double i;       // annual interest rate (expressed in %)
    double t;       // years
    double I;       // Interes simple
    char cl[100];   // interest type
    
    cin >> c >> i >> t >> cl;

    if (strcmp(cl,"simple") == 0) {  
        //interes simple
        i /= 100;
        I = c * i * t;
        cout << I + c << endl;
    }
    else if(strcmp(cl, "compound") == 0) {    
        //interes compuesto
        cout << c * pow((1 + (i / 100)), t) << endl;
    }

    return 0;
}