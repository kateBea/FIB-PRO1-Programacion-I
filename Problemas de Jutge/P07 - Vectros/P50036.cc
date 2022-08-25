// P50036   HORNER SCHEME

#include <vector>
#include <cmath>
using namespace std;

int evaluate(const vector<int>& p, int x) {
    int n = p.size();
    int aux;
    int E = 0;

    for (int i = 0; i < n; ++i) {
        aux = pow(x, i);
        E += (aux * p[i]);
    }
    return E;
}
