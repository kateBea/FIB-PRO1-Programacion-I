// P71753   MAXIMUM OF A SEQUENCE

#include <iostream>
using namespace std;

int main () {
	int number;

    while (cin >> number) {
        int minNum, maxNum;

        cin >> maxNum;

        for (int i = 1; i < number; ++i) {
            cin >> minNum;
            maxNum = max(minNum,maxNum);
        }
        cout << maxNum << endl;
    }

    return 0;
}


