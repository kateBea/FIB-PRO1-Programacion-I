// P85480   PAIRS OF A SEQUENCE (1)

#include <iostream>
#include <vector>
using namespace std;

bool prime(int n) {
    if (n <= 1) 
        return false;
    else {
        for (int i = 2; i*i <= n; ++i) 
            if (n%i == 0) 
                return false;
    }

    return true;
}

int main() {
    int s;
    int m;
    bool found = false;

    while (cin >> s) {
        m = s;
        vector<int> v(s);

        for (int j = 0; j < s; ++j) 
            cin >> v[j];

        while (not found and m > 0) {
            for (int n = 0; n < m - 1; ++n) 
                if (prime(v[n] + v[m - 1])) 
                    found = true;

            --m;
        }
        if (found) 
            cout << "yes" << endl;
        else 
            cout << "no" << endl;

        found = false;
    }

    return 0;
}



/*
int common_elements(const vector<int>& X, const vector<int>& Y) {
    int n1 = X.size();
    int n2 = Y.size();
    int cnt = 0, iterador = 0;
    bool trobat = false;
    if (n1 >= n2) {
        for (int n = 0; n < n2; ++n) {
            while (not trobat and iterador < n2) {
                if (Y[n] == X[iterador]) {
                    ++cnt;
                    trobat = true;
                }
                ++iterador;
            }
            iterador = 0;
            trobat = false;
        } 
    }
    else {
        for (int m = 0; m < n1; ++m) {
            while (not trobat and iterador < n1) {
                if (X[m] == Y[iterador]) {
                    ++cnt;
                    trobat = true;
                }
                ++iterador;
            }
            iterador = 0;
            trobat = false;
        }
    }
    return cnt;
}
*/
