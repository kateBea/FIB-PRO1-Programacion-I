// P30170   REPEATED WORDS

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Dada {
    string nom; //paraula
    int reps;   //nombre aparicions
};

bool comp_alfabeticament(const Dada& a, const Dada& b) {
    return a.nom < b.nom;
}

int main() {
    int n;
    while (cin >> n) {
        vector<Dada> d(n);
        for (int i = 0; i < n; ++i) {
            cin >> d[i].nom;
            d[i].reps = 1;
        }

        sort(d.begin(), d.end(), comp_alfabeticament);

        for (int i = 1; i < n; ++i) {
            if (d[i].nom == d[i - 1].nom) {
                d[i].reps += d[i - 1].reps;
                d[i - 1].reps = 0;
            }
        }

        vector<int> tot(n + 1, 0);
        for (int i = 0; i < d.size(); ++i) {
            tot[d[i].reps] += d[i].nom.size();
        }

        for (int i = 1; i < tot.size(); ++i)
            if (tot[i] != 0) cout << i << " : " << tot[i] << endl;
        cout << endl;
    }

    return 0;
}
