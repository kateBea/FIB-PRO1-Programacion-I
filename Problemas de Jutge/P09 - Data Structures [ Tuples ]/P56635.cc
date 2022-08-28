// P56635	RECTANGLES (1)

#include <iostream>
using namespace std;

struct Rectangle {
	int x_left, x_right, y_down, y_up;
};

void read(Rectangle& r) {
	cin >> r.x_left >> r.x_right >> r.y_down >> r.y_up;
}

int relationship(const Rectangle& r1, const Rectangle& r2) {
	if (r1.x_left == r2.x_left and r1.x_right == r2.x_right and r1.y_down == r2.y_down and r1.y_up == r2.y_up) return 4;
	if (r2.x_left <= r1.x_left and r2.x_right >= r1.x_right and r2.y_down <= r1.y_down and r2.y_up >= r1.y_up) return 1;
	if (r1.x_left <= r2.x_left and r1.x_right >= r2.x_right and r1.y_down <= r2.y_down and r1.y_up >= r2.y_up) return 2;
	if (r1.y_down > r2.y_up or r2.y_down > r1.y_up or r1.x_left > r2.x_right or r2.x_left > r1.x_right) return 0;

	return 3;
}

int main() {
	int n;
	Rectangle r1, r2;
	cin >> n;
	while (n != 0) {
		read(r1);
		read(r2);
		if (relationship(r1, r2) == 0) cout <<  "rectangles do not intersect" << endl;
		else if (relationship(r1, r2) == 1) cout << "the first rectangle is inside the second one" << endl;
		else if (relationship(r1, r2) == 2) cout << "the second rectangle is inside the first one" << endl;
		else if (relationship(r1, r2) == 3) cout << "rectangles intersect" << endl;
		else if (relationship(r1, r2) == 4) cout << "rectangles are identical" << endl;
		--n;
	}

	return 0;
}
