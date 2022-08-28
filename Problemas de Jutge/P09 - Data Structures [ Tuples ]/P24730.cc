// P24730   PARVULARI

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct {
    string name;
    int caramels;
    int pastanagues;
}Professor;

typedef vector<Professor> EquipDocent;

bool comp(const Professor& a, const Professor& b) {
    if (a.caramels > b.caramels) {
        return true;
    }
    else if (a.caramels < b.caramels) {
        return false;
    }
    else {
        if (a.pastanagues > b.pastanagues) {
            return true;
        }
        else if (a.pastanagues < b.pastanagues) {
            return false;
        }
        else {
            if (a.name.size() < b.name.size()) return true;
            else if (a.name.size() > b.name.size()) return false;
            else return a.name < b.name;
        }
    }
}

EquipDocent llegir_llista(const int& n) {
    EquipDocent ret(n);
    for (int i = 0; i < n; ++i) {
        cin >> ret[i].name >> ret[i].caramels;
        cin >> ret[i].pastanagues;
    }
    return ret;
}

int main() {
    int n;

    cin >> n; 

    for (int cs = 0; cs < n; ++cs) {
        int c;

        cin >> c;

        EquipDocent list = llegir_llista(c);
        sort(list.begin(), list.end(), comp);

        for (int i = 0; i < c; ++i) {
            cout << list[i].name << endl;
        }
        cout << endl;
    }

    return 0;
}