// P11141	STUDENTS

#include <iostream>
#include <vector>
using namespace std;

struct Student {
	int idn;
	string name;
	double mark;        // The mark is a value between 0 and 10, or -1 that represents NP
	bool repeater;
};

void information(const vector <Student>& es, double& min, double& max, double& avg) {
	int n = es.size();
	min = 10;
	max = 0;
	avg = 0;
	int count = 0;

	for (int i = 0; i < n; ++i) {
		if (not es[i].repeater and es[i].mark != -1) {
			if (es[i].mark < min) min = es[i].mark;
			if (es[i].mark > max) max = es[i].mark;
			avg += es[i].mark;
			++count;
		}
	}
	if (count != 0) {
		avg /= double(count);
	}
	else {
		avg = -1;
		min = -1;
		max = -1;
	}
}