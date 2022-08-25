// P71310 SCALAR PRODUCT

#include <iostream>
#include <vector>
using namespace std;

double scalar_product(const vector<double>& u, const vector<double>& v) {
  int n = u.size();
  double scal = 0;
  for (int j = 0; j < n; ++j) 
    scal += u[j] * v[j];

  return scal;
}

int main() {
    vector<double> s(2,5);
    vector<double> q(2,6);
    double d = scalar_product(s,q);
    cout << d << endl;

    return 0;
}