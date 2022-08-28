// P14343	JUDGE (1)

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Submission {
	string idn;
	string exer;
	int time;
	string res;
};

struct Student {
	string idn;
	int num;
};

struct Results {
	Student env_verds;
	Student ex_verds;
	Student ex_verms;
	Student ex_in;
	Student max_temp;
};

typedef vector <Submission>History;

void llegeix_env(Submission&e) {
	cin >> e.idn >> e.exer >> e.time >> e.res;
}

void llegeix_hist(History&h) {
	for (int i = 0; i < h.size(); ++i) llegeix_env(h[i]);
}

bool es_mes_petit(const Submission&a, const Submission&b) {
	if (a.idn == b.idn) return a.exer < b.exer;
	return a.idn < b.idn;
}

void actualitza_param(int intent, Student &actual, const string& alumneint) {
	if (intent > actual.num) {
		actual.idn = alumneint;
		actual.num = intent;
	}
}

void calcula_resultats(const History&v, Results&r) {
	int i = 0;
	r.max_temp.num = r.env_verds.num = r.ex_verds.num = r.ex_verms.num =
		r.ex_in.num = 0;

	while (i < v.size()) {
		string alum = v[i].idn;
		int auxenv_verds, auxex_in, auxex_verds, auxex_verms;
		auxenv_verds = auxex_in = auxex_verds = auxex_verms = 0;
		while (i < v.size() and v[i].idn == alum) {
			string exer = v[i].exer;
			bool hihaverd, hihagroc, hihavermell;
			hihaverd = hihagroc = hihavermell = false;
			while (i < v.size() and v[i].idn == alum and v[i].exer == exer) {
				if (v[i].res == "yellow") hihagroc = true;
				if (v[i].res == "red") hihavermell = true;
				if (v[i].res == "green") {
					++auxenv_verds;
					hihaverd = true;
				}
				actualitza_param(v[i].time, r.max_temp, alum);
				++i;
			}
			if (hihaverd) ++auxex_verds;
			if (hihavermell and not hihaverd and not hihagroc) ++auxex_verms;
			++auxex_in;
		}
		actualitza_param(auxex_verds, r.ex_verds, alum);
		actualitza_param(auxex_verms, r.ex_verms, alum);
		actualitza_param(auxex_in, r.ex_in, alum);
		actualitza_param(auxenv_verds, r.env_verds, alum);
	}
}

void pinta_al(const Student &a, const string &m1, bool pintanum) {
	cout << m1;
	if (a.num != 0) {
		cout << a.idn;
		if (pintanum) cout << " (" << a.num << ')';
		cout << endl;
	} else cout << '-' << endl;
}

void escriu_resultats(const Results &r) {
	pinta_al(r.env_verds, "student with more green submissions:       ", true);
	pinta_al(r.ex_verds, "student with more green exercises:         ", true);
	pinta_al(r.ex_verms, "student with more red exercises:           ", true);
	pinta_al(r.ex_in, "student with more tried exercises:         ", true);
	pinta_al(r.max_temp, "student who has done the last submission:  ", false);
}

int main() {
	int n;
	cin >> n;
	History h(n);
	llegeix_hist(h);

	sort(h.begin(), h.end(), es_mes_petit);
	Results r;
	calcula_resultats(h, r);

	escriu_resultats(r);

	return 0; 
}