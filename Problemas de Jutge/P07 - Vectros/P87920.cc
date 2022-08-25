// P87920   EQUAL TO THE SUM OF THE REST (2)

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, suma = 0;
    int iterador = 0;
    bool found = false;

    while (cin >> n) {
        vector<int> v(n);

        for (int i = 0; i < n; ++i) 
            cin >> v[i];

        for (int sm = 0; sm < n; ++sm) 
            suma += v[sm];

        while (not found and iterador < n) {
            if (v[iterador] == suma - v[iterador]) 
                found = true;
            
            ++iterador;
        }
        if (found) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;

        found = false;
        suma = 0;
        iterador = 0;
    }

    return 0;
}
