// P26041	REVERSING A LIST OF WORDS (1)

#include <iostream>
using namespace std;

void escribir(string s) {
	if (cin >> s) {
		escribir(s);
		cout << s << endl;
	}
}

int main () {
	string seq;
	escribir(seq);

	return 0;
}