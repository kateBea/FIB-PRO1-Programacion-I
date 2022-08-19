// P98960	UPPERCASE AND LOWERCASE LETTERS

#include <iostream>
using namespace std;

int main (){
	char letter;
	cin >> letter;
	if (letter >= 97 and letter <=122) {
		letter -= 32;
		cout << letter << endl;
	}
	else if (letter >= 65 and letter <=90) {
	    letter += 32;
	    cout << letter << endl;
	}
}