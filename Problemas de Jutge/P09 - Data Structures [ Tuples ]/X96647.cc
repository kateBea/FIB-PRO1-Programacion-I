// X96647   VECTORES NORMALIZADOS

#include <iostream>
#include <vector>
using namespace std;

struct Punto {
    double x,y;
};

bool baricentro(const vector<Punto>& v, Punto& b) {
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        b.x += v[i].x;
        b.y += v[i].y;
    }
    b.x /= n;
    b.y /= n;
    for (int i = 0; i < n; ++i) {
        if (b.x == v[i].x and b.y == v[i].y) 
            return false;
    }
    return true;
}

bool different(const vector<Punto>& t) {
    int n = t.size();
    if (n == 1) return false;
    else {
        for (int i = 1; i < n; ++i) {
            bool x_coor = t[i].x != t[i-1].x;
            bool y_coor = t[i].y != t[i-1].y;
            if (x_coor or y_coor) 
                return true;
        }
        return false;
    }
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    int n;

    while (cin >> n) {
        double suma_x = 0, suma_y = 0;
        vector<Punto> coor(n);
        for (int i = 0; i < n; ++i) {
            cin >> coor[i].x >> coor[i].y;
            suma_x += coor[i].x;
            suma_y += coor[i].y;
        }
        Punto bar;
        bar.x = bar.y = 0;

        bool prop1 = different(coor);
        bool prop2 = suma_x == suma_y;
        bool prop3 = baricentro(coor, bar);

        cout << "baricentro: " << '(' << bar.x << ',' << bar.y << ')' << endl;

        if (not prop1) cout << "el vector no cumple la propiedad 1" << endl;
        else if (not prop2) cout << "el vector no cumple la propiedad 2" << endl;
        else if (not prop3) cout << "el vector no cumple la propiedad 3" << endl;
        else cout << "vector normalizado" << endl;
    }

    return 0;
}