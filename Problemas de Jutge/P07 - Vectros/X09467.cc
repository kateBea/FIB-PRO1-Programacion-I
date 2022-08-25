// X09467   RAMPS

#include <iostream>
#include <vector>
using namespace std;

vector <bool> ramps_pos(const vector <int>& V) {
    int x0 = V[0];
    int x1 = V[1];

    vector <bool> positions(V.size());
    for (int i = 2; i < V.size(); i++) {
        if ((x0 < x1 and x1 < V[i]) or
            (x0 > x1 and x1 > V[i])) {
            positions[i-2] = true;
        } 
        else 
            positions[i-2] = false;

        x0 = x1;
        x1 = V[i];
    }

    return positions;
}

int pot_conflictive(const vector <bool>& B) {
    int c = 0;

    for (int j = 0; j < B.size()-2; ++j) {
        if (B[j] and B[j+1]) c++;
        if (B[j] and B[j+2]) c++;
    }
    return c;
}

int main() {
    int n;
    while (cin >> n) {
        vector <int> num_list(n);
        for (int i = 0; i < n; i++) {
            cin >> num_list[i];
        }
        vector<bool> positions = ramps_pos(num_list);
        cout << "positions with a ramp:";
        for (int i = 0; i < positions.size(); i++) {
            if (positions [i] == 1) 
                cout << ' ' << i;
        }

        cout << endl << "potentially conflictive: " 
            << pot_conflictive(positions) << endl;

        cout << "---" << endl;
    }

    return 0;
}