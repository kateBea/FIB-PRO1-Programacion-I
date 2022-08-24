// P52926   GIRANT UNA LLISTA DE PARAULES (2)

#include <iostream>
using namespace std;

void escribir(string s) {
    if (cin >> s and s != "end") {
        escribir(s);
        cout << s << endl;
    }
}

int main() {
    string seq;
    escribir(seq);

    return 0;
}


