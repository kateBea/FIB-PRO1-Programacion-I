// P56358   ADD AND SUBSTRACT ONE SECOND

#include <iostream>
using namespace std;

struct Time {
    int hour, minute, second;
};

void one_second(const Time& t, Time& t1, Time& t2) {
    t1 = t2 = t;
    t1.second = t.second + 1;

    if (t1.second == 60) {
       t1.second = 0;
       ++t1.minute;
    }

    if (t1.minute == 60) {
        t1.minute = 0;
        ++t1.hour;
    }

    if (t1.hour == 24) 
        t1.hour = 0;

    t2.second = t.second - 1;
    if (t2.second < 0) {
        t2.second = 59;
        --t2.minute;
    }
    if (t2.minute < 0) {
        t2.minute = 59;
        --t2.hour;
    }
    if (t2.hour < 0) 
        t2.hour = 23;
}

void print(const Time& x) {
    cout << x.hour << ' ' << x.minute << ' ' << x.second << endl;
}

int main() {
    Time e1, add, sub;
    while (cin >> e1.hour >> e1.minute >> e1.second) {
        one_second(e1, add, sub);
        print(add);
        print(sub);
    }
    
    return 0;
}
