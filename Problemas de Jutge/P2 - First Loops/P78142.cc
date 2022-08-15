// P78142	AVERAGE

#include <iostream>
using namespace std;

int main(){
	cout.setf(ios::fixed);
	cout.precision(2);
	
	double n;
	double SumaN = 0, MediaN = 0;
	
	while(cin >> n) {
		SumaN += n;
		++MediaN;
	}
	
	cout << SumaN / MediaN << endl;

	return 0;
}
