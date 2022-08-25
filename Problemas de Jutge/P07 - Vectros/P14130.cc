// P14130   EQUAL TO THE LAST ONE

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    int cnt;

    cnt = 0;
    cin >> n;

    vector<int> s(n);

    for (int i = 0; i < n; ++i) {
        int x;

        cin >> x;
        s[i] = x;
    }
    for (int j = 0; j < n-1; ++j) {
        if (s[j] == s[n - 1]) 
            ++cnt;
    }

    cout << cnt << endl;

    return 0;
}
