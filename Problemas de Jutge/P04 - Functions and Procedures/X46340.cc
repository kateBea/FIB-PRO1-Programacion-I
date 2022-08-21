// X46340 FUNCIÓN PARA LA SUMA DEL MÍNIMO Y EL MÁXIMO DE TRES ENTEROS

#include <iostream>
#include <cmath>
using namespace std;

int sum_min_max(int x, int y, int z) {
	int max_num, min_num;

    if(x >= y and x >= z) {
        max_num = x;
    }
    else if(y >= z) {
        max_num = y;
    }
    else {
        max_num = z;
    }

    
    //encontrar el numero mas pequeño
    if(x <= y and x <= z) {
        min_num = x;
    }
    else if(y <= z) {
        min_num = y;
    }
    else {
        min_num = z;
    }

    return min_num + max_num;
}

int main() {
    int n, m, v;

    cin >> n >> m >> v;

    cout << sum_min_max (n, m, v) << endl;

    return 0;
}
