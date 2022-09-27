// P96529   KEYS AND PARENTHESIS

#include <iostream>
#include <limits>
#include <string>
#include <stack>
using namespace std;

char computeBracket(char c) {
    if (c == '(')
        return ')';
    else
        return ']';
}

bool es_obert(char c) {
    return (c == '(') or (c == '[');
}

void printStack(stack<char> v) {
    int n = v.size();
    cout << "[Top]" << endl;
    for (int i = 1; i <= n; ++i) {
        cout << "| " << v.top() << " |" << endl;
        v.pop();
    }
    cout << "[Bottom]" << endl;
}

int main() {
    string line;

    while (getline(cin, line))
    {
        int index = 0;
        char entrada = line[index];
        bool correcte = es_obert(entrada);
        stack<char> tancat;
        while (index < line.size()) {
            if (es_obert(entrada)) {
                tancat.push(computeBracket(entrada));
            }
            else if (not es_obert(entrada) and tancat.size() == 0) {
                correcte = false;
            }
            else {
                if (entrada != tancat.top())
                    correcte = false;
                else
                    tancat.pop();
            }

            entrada = line[++index];
        }

        if (correcte and tancat.size() == 0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}
