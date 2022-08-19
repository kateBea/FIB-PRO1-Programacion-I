// X59091   RECTÁNGULOS(2)

#include <iostream>

using namespace std;

int main(){
    int n, m;

    bool first = true;

    while (cin >> n >> m) {
        if (first) 
            first = false;
        else 
            cout << endl;

        int d = 9;
        
        for (int row = 1; row <= n; row++){
            for (int col = 1; col <= m; col++) {
                cout << d;
                if (d == 0) 
                    d = 9;
                else 
                    d--;
            }
            cout << endl;
        }
    }

    return 0;
}
