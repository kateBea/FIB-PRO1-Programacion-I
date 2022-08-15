// P36668	SUM OF SQUARES

#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
	int n; 
    int sum = 0;
	cin >> n;
	
	while(n > 0)
	{
		sum += pow(n,2);
		n = n - 1;

        // sum += pow(n,2);
		// es lo mismo que sum = pow(n,2) + 1;

        // n--; 
		// es los mismo que n = n-1;
	}

	cout << sum << endl;
	
	return 0;
}