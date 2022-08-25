// X20419   LONGITUD MEDIA Y PALABRA MAS FRECUENTE

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char most_frequent_letter(const string& s) {
    vector <char> char_list(s.begin(), s.end());

    sort(char_list.begin(), char_list.end());

    int c = 1;
    int cmax = 0;
    char p0 = '#';
    char pmax = '#';


    for (int i = 0; i < char_list.size(); i++) {
        if (p0 == char_list[i]) c++;
        else c = 1;

        if (cmax < c) {
            cmax = c;
            pmax = char_list[i];
        }

        p0 = char_list[i];
    }

    return pmax;
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);

    double n, mlength = 0;
    string w;

    cin >> n;

    vector <double> size(n);
    vector <string> words(n);

    for (int i = 0; i < n; i++) {
        cin >> w;
        words[i] = w;

        size[i] = w.size();
        mlength += size[i] / n;
    }
    cout << mlength << endl;

    for (int i = 0; i < n; i++) {
        if (size[i] >= mlength) {
            cout << words[i] << ": " 
                << most_frequent_letter(words[i]) << endl;
        }
    }

    return 0;
}