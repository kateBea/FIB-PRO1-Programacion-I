// P32533   CONTROL C202E

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x = n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j < x) 
                cout << '+';
            else if(j == x) 
                cout << '/';
            else if(j <= n) 
                cout << '*';
        }
        cout << endl;
        --x;
    }

    return 0;
}
