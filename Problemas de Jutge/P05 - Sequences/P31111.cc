// P31111 PARENTHESES

#include <iostream>

using namespace std;

int main()
{

	char c;
	int openClose = 0;

	while (cin >> c and openClose >= 0)
	{
		if (c == '(')
			++openClose;
		else
			--openClose;
	}
	if (openClose == 0)
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	return 0;
}