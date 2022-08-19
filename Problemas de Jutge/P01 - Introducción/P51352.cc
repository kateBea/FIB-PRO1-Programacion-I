// P51352   ELEMENTOS

#include <iostream>
using namespace std;

int main() {
    char a;
    char p;
    
    cin >> a >> p;

    if(a == p) {
        cout << '-' << endl;
    }
    if (a == 'A' and p == 'P') {
        cout << '1' << endl;
    }
    else if (a == 'A' and p == 'V') {
        cout << '2' << endl;
    }
    else if (a == 'P' and p == 'A') {
        cout << '2' << endl;
    }
    else if (a == 'V' and p == 'A') {
        cout << '1' << endl;
    }
    else if (a == 'P' and p == 'V') {
        cout << '1' << endl;
    }
    else if (a == 'V' and p == 'P') {
        cout << '2' << endl;
    }

    return 0;
}