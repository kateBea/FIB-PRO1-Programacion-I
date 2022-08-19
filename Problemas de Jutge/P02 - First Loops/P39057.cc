// P39057   COMPUTING AREAS

#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(6);
    
    int n;
    string a = "circle";
    string b = "rectangle";
    double radius, width, length;
    double acirc = 0, arec = 0;
    double Pi = 3.14159265358979323846;

    cin >> n;
    
    for(int i = 0; i < n; i++) {
        string c;

        cin >> c; 

        if(c == a) {
            cin >> radius;

            acirc = radius * radius * Pi;
            cout << acirc << endl;
        }
        else if(c == b) {
            cin >> width >> length;

            arec = width * length;
            cout << arec << endl;
        }
    }

    return 0;
}
