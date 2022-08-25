// P89407   F004B. STABLE PRODUCTS
#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;

//funcio que calcula el nombre de digits de j en base B
int numCif(int j, int B) {
    if (j < B) 
        return 1;
    
    return 1 + numCif(j / B, B);

}

vector<int> concatenation(const vector<int>& v1, const vector<int>& v2) {
    int n1 = v1.size();
    int n2 = v2.size();
    vector<int> conc(n1+n2);
    for (int i = 0; i < n1; ++i) conc[i] = v1[i];
    for (int j = 0; j < n2; ++j) conc[n1+j] = v2[j];
    return conc;
}

//funcio que indica si en base b, x i y per una bande i
//x i y per l'altre tenen els mateixos digits
bool mateixos_digits(int x, int y, int b) {
	int l1 = numCif(x, b);
	int l2 = numCif(y, b);
	int aux = x*y;
	int l3 = numCif(aux, b);

	if (l3 != l1+l2) 
        return false;

	vector<int> v1(l1);
	vector<int> v2(l2);
	vector<int> v3(l3);

	for (int s3 = 0; s3 < l3; ++s3) {
		v3[l3 - s3 - 1] = aux % b;
		aux /= b;
	}

	for (int s1 = 0; s1 < l1; ++s1) {
		v1[l1 - s1 - 1] = x % b;
		x /= b;
	}

	for (int s2 = 0; s2 < l2; ++s2) {
		v2[l2 - s2 - 1] = y % b;
		y /= b;
	}

	vector<int> v = concatenation(v1, v2);
	sort(v.begin(), v.end());
	sort(v3.begin(), v3.end());
	for (int i = 0; i < l3; ++i) if (v[i] != v3[i]) return false;
	return true;
}

//funcio que escriu en pantalla, el nombre n en base b
void escriu(int n, int b) {
    if (n / b == 0) {
        if (b > 10) {
            if (n == 10 and b > 10) cout << 'A';
            else if (n == 11 and b > 11) cout << 'B';
            else if (n == 12 and b > 12) cout << 'C';
            else if (n == 13 and b > 13) cout << 'D';
            else if (n == 14 and b > 14) cout << 'E';
            else if (n == 15) cout << 'F';  
            else cout << n;
        }
        else cout << n;
    }
    else {
        escriu(n / b,b);
        if (b <= 10) cout << n % b;
        else {
            if (n % b == 10 and b > 10) cout << 'A';
            else if (n % b == 11 and b > 11) cout << 'B';
            else if (n % b == 12 and b > 12) cout << 'C';
            else if (n % b == 13 and b > 13) cout << 'D';
            else if (n % b == 14 and b > 14) cout << 'E';
            else if (n % b == 15) cout << 'F';
            else cout << n % b;
        }
    }
}

int main() {
	int a, b;
	bool cap = true;
	bool first = true;

    while (cin >> a >> b) {
        cout << "solutions for " << a << " and " << b << endl;
        for (int base = 2; base <= 16; ++base) {
        	if (mateixos_digits(a,b,base)) {
        		cap = false;
        		escriu(a,base); 
        		cout << " * ";
        		escriu(b,base);
        		cout << " = "; 
        		escriu(a * b, base); 
        		cout << " (base " << base << ')' << endl;
        	}
        }
        if (cap) 
            cout << "none of them" << endl;

        cap = true;

        if (first) {
        	cout << endl;
        	first = false;
        }
        else {
            cout << endl;
        }
    }

    return 0;
}