// X04437   DISTANCE TO THE ORIGIN

#include <iostream>
#include <cmath>
using namespace std;

double dist_or(double x, double y) {
	return sqrt ((x * x) + (y * y));
}

int main() {
    int n, m;

    cin >> n >> m;

    cout << dist_or (n, m) << endl;

    return 0;
}
