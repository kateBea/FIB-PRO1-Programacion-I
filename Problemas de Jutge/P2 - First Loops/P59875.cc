// P59875   TOP TO BOTTOM

#include <iostream>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    if (x == y) {
        cout << x << endl;
    }
    else if(x > y) {
        for(int i = x; i >= y; i--) {
            cout << i << endl;
        }
    }
    else {
        for(int i = y; x <= i; i--) {
            cout << i << endl;
        }
    }

    return 0;
}