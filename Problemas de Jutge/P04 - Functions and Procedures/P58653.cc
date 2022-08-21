// P58653	CLASIFICACIÓN DE CARACTERES

#include <iostream>
using namespace std;

void escriu_linia(char c, string s, bool b) {
	cout << s << "('" << c << "') = ";

	if (b) 
		cout << "cert" << endl;
	else 
		cout << "fals" << endl;
}

int main() {
	char in;
	
	cin >> in;

	if ('0' <= in and in <= '9') {
		escriu_linia(in, "lletra", false);
		escriu_linia(in, "vocal", false);
		escriu_linia(in, "consonant", false);
		escriu_linia(in, "majuscula", false);
		escriu_linia(in, "minuscula", false);
		escriu_linia(in, "digit", true);
	} 
	else if (('A' <= in and in <= 'Z') or ('a' <= in and in <= 'z'))   {
		escriu_linia(in, "lletra", true);

		bool vocals_minuscules = (in == 'a') or (in == 'e') or (in == 'i') or (in == 'o') or (in == 'u');
		bool vocals_majuscules = (in == 'A') or (in == 'E') or (in == 'I') or (in == 'O') or (in == 'U');

		if (vocals_minuscules or vocals_majuscules) {
			escriu_linia(in, "vocal", true);
			escriu_linia(in, "consonant", false);
		} 
		else {
			escriu_linia(in, "vocal", false);
			escriu_linia(in, "consonant", true);
		}

		if ('A' <= in and in <= 'Z') {
			escriu_linia(in, "majuscula", true);
			escriu_linia(in, "minuscula", false);
		} 
		else {
			escriu_linia(in, "majuscula", false);
			escriu_linia(in, "minuscula", true);
		}
		escriu_linia(in, "digit", false);
	} 
	else {
		escriu_linia(in, "lletra", false);
		escriu_linia(in, "vocal", false);
		escriu_linia(in, "consonant", false);
		escriu_linia(in, "majuscula", false);
		escriu_linia(in, "minuscula", false);
		escriu_linia(in, "digit", false);
	}

	return 0;
}