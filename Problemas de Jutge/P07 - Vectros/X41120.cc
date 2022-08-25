// X41120   VECTOR MONTAÑOSO

#include <iostream>
#include <vector>
using namespace std;

vector<int> obtain_peaks(const vector <int>& v) {
    int x0, x1;

    x0 = v[0];
    x1 = v[1];

    vector <int> cims;
    for (int i = 2; i < (v.size()); i++) {
        if (x0 <x1 and x1>v[i]) cims.push_back(x1);
        x0 = x1;
        x1 = v[i];
    }
    return cims;
}

int main() {
    int n;
    bool nothing = true;

    cin >> n;
    vector <int>mountain(n);

    for (int i = 0; i < (n); i++) 
        cin >> mountain[i];

    vector <int>res = obtain_peaks(mountain);
    int sz = res.size();

    cout << sz << ":";

    for (int i = 0; i < sz; i++) 
        cout << ' ' << res[i];

    cout << endl;

    for (int i = 0; i < (sz-1); i++) {
        if (res.back() < res[i]) {
            if (not nothing) 
                cout << ' ';
            
            cout << res[i];
            nothing = false;
        }
    }
    if (nothing) 
        cout << '-';
    
    cout << endl;

    return 0;
}