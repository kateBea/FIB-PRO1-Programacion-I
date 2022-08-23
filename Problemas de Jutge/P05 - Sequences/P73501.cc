// P73501   PARELLS CREIXENTS

#include <iostream>
using namespace std;

int main () {
	int n;
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        int mn = -1, mx = -1, cont = 0;

        while (mn != 0) {
            cin >> mn;

            if (mn > mx and mx != -1) 
                cont++;
            
            mx = mn;
        }
        cout << cont << endl;
    }

    return 0;
}

