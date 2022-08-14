// P90226   COMPARISON OF WORDS

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string temp1, temp2;

    cin >> temp1 >> temp2;

    if (temp1 > temp2) {
        cout << temp1 << " > " << temp2 << endl;
    }
    else if (temp1 < temp2) {
        cout << temp1 << " < " << temp2 << endl;
    }
    else cout << temp1 << " = " << temp2 << endl;

    return 0;
}    