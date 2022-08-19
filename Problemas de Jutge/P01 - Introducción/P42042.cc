// P42042	CLASSIFICATION OF CHARACTERS (1)

#include <iostream>
using namespace std;

int main (){
	char l;
	cin >> l;
	if (l >= 'a' and l <= 'z') {
		cout << "lowercase" << endl;
	}
	else if (l >= 'A' and l <= 'Z') {
		cout << "uppercase" << endl;
	}

	switch (l)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			cout << "vowel" << endl;
			break;
		default:
			cout << "consonant" << endl;
	}
}