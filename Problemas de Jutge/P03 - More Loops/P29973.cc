// P29973	TRIANGLE

#include <iostream>
using namespace std;

int main() {
	int n;
	char a = '*';
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) 
			cout << a;
			
		cout << endl;
	}

	return 0;
}
