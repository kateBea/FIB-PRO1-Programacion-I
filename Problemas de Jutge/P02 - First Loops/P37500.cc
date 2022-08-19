// P37500   FIRST NUMBERS

#include <iostream>
using namespace std;

int main(){
    int n, s;

    s = 0;

    cin >> n;

    cout << s << endl;

    while((s > n) or (s < n)) {
        s = s + 1;
        cout << s << endl;
    }

    return 0;
}