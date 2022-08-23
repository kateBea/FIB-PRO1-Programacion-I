// P23001	CONSECUTIVE REPEATED WORDS

#include <iostream>
using namespace std;

int main() {
	int seqllarg = 1;
	int cont = 1;
	string x, d;

	cin >> x;

	while (cin >> d) {
		if (x == d) {
			cont++;
			if (seqllarg <= cont) seqllarg = cont;
		} 
		else {
			cont = 0;
		}
	}
	cout << seqllarg << endl;

	return 0;
}
