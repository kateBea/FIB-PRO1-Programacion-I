// P79817   POTENCIAS

#include <iostream>

using namespace std;

int main(){
    int a, b, pot;

    while (cin >> a >> b) {
        pot = 1;

        for(int i = 1; i <= b; i++) pot = pot * a;

        cout << pot << endl;
    }

    return 0;
}
