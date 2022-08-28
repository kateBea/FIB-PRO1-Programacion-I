// P81104   F001A. STUDENTS AT THE FIPS

#include <iostream>
#include <vector>
using namespace std;

struct Assignatura {
    string nom;                 // Nom de l’assignatura
    double nota;                // Entre 0 i 10, -1 indica NP
};

struct Alumne {
    string nom;                 // Nom de l’alumne
    int dni;                    // DNI de l’alumne
    vector<Assignatura> ass;    // Llista d’assignatures de l’alumne
};

double recorrer_ass(const vector<Assignatura>& t, string test_ass) {
    int n = t.size();
    if (n == 0) return -1;
    for (int i = 0; i < n; ++i) {
        if (t[i].nom == test_ass and t[i].nota != -1) {
            return t[i].nota;
        }
    }
    return -1;
}


double nota(const vector<Alumne>& alums, int dni, string nom) {
    int n = alums.size();
    for (int i = 0; i < n; ++i) {
        bool dni_match = alums[i].dni == dni;
        if (dni_match) {
            if (recorrer_ass(alums[i].ass, nom) < 0) return -1;
            else return recorrer_ass(alums[i].ass, nom);
        }
    }
    return -1;
}

double mitjana(const vector<Assignatura>& ass) {
    int n = ass.size();
    if (n == 0) {
        return -1;
    }
    else {
        bool found = false;
        double mitjana = 0;
        double nps = 0;
        for (int i = 0; i < n; ++i) {
            if (ass[i].nota != -1) {
                found = true;
                mitjana += ass[i].nota;
            }
            else if (ass[i].nota == -1) 
                ++nps;
        }
        if (not found) 
            return -1;

        mitjana /= (n - nps);
        return mitjana;
    }
}

void compta(const vector<Alumne>& alums, int dni, string nom, int& com) {
    int n = alums.size();
    int cont = 0;
    double mark = nota(alums, dni, nom);
    for (int i = 0; i < n; ++i) {
        double mid = mitjana(alums[i].ass);
        bool pre = mid != -1;

        if (pre and mid > mark) 
            ++cont;
    }
    com = cont;
}

vector<Alumne> read_list(const int& x) {
    vector<Alumne> ret(x);
    for (int i = 0; i < x; ++i) {
        cin >> ret[i].nom >> ret[i].dni;
        int num_ass;
        Assignatura s;

        cin >> num_ass;


        for (int h = 0; h < num_ass; ++h) {
            cin >> s.nom >> s.nota;
            ret[i].ass.push_back(s);
        }
    }
    return ret;
}

int main() {
    int n;
    int idn;
    string mater;

    cin >> n;
    vector<Alumne> lista = read_list(n);

    while (cin >> idn >> mater) {
        int m = 0;
        compta(lista, idn, mater, m);
        cout << m << endl;
    }

    return 0;
}