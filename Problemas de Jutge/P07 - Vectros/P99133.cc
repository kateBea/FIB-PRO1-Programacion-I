// P99133   REVERSING WORDS (2)
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void reverse(string p) {
    int size = p.length();
    for (int q = size-1; q >= 0; --q) 
        cout << p[q];

    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<string> s(n);

    for (int i = 0; i < n; ++i) 
        cin >> s[i];

    for (int j = n-1; j >= 0; --j) 
        reverse(s[j]);

    return 0;
}
