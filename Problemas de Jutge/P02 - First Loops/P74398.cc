// P74398	NÚMERO DE CIFRAS

#include <iostream>
using namespace std;

int main() {
	int x, y;

	cin >> x;
	
	for(int i = 2; i <= 16; i++){ 
		int ncif = 0; 

		y = x;   

		while(y != 0) {
			y /= i;
			++ncif;
		}
		
		cout << "Base " << i << ':' << " " << ncif << " cifras." << endl;
	}
}
