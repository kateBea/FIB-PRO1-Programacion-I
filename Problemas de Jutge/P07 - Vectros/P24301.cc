// P24301   CONCATENATION OF VECTORS

#include <iostream>
#include <vector>
using namespace std;

vector<int> concatenation(const vector<int>& v1, const vector<int>& v2) {
    int n1 = v1.size();
    int n2 = v2.size();
    vector<int> conc(n1 + n2);

    for (int i = 0; i < n1; ++i) conc[i] = v1[i];
    for (int j = 0; j < n2; ++j) conc[n1+j] = v2[j];

    return conc;
}

int main() {
    int size1;
    int size2;
    cout << "Enter size of v1: "; cin >> size1;
    cout << "Enter size of v2; "; cin >> size2;

    vector<int> s1(size1);
    vector<int> s2(size2);

    cout << "Enter elements of v1: ";
    for (int n = 0; n < size1; ++n) 
        cin >> s1[n];

    cout << "Enter elements of v2: ";
    for (int m = 0; m < size2; ++m) 
        cin >> s2[m];

    vector<int> out = concatenation(s1, s2);
    int q = out.size();

    for (int t = 0; t < q; ++t) 
        cout << out[t] << " ";

    return 0;
}
