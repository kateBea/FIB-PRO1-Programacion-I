// P82952	RECTANGLES (2)

#include <iostream>
using namespace std;

struct Rectangle {
	int x_left, x_right, y_down, y_up;
};

void llegeix(Rectangle& r) {
	cin >> r.x_left >> r.x_right >> r.y_down >> r.y_up;
}

int relationship(const Rectangle& r1, const Rectangle& r2) {
	if (r1.x_left == r2.x_left && r1.x_right == r2.x_right && r1.y_down == r2.y_down && r1.y_up == r2.y_up) return 4;
	if (r2.x_left <= r1.x_left && r2.x_right >= r1.x_right && r2.y_down <= r1.y_down && r2.y_up >= r1.y_up) return 1;
	if (r1.x_left <= r2.x_left && r1.x_right >= r2.x_right && r1.y_down <= r2.y_down && r1.y_up >= r2.y_up) return 2;
	if (r1.y_down >= r2.y_up or r2.y_down >= r1.y_up or r1.x_left >= r2.x_right or r2.x_left >= r1.x_right) return 0;
	else return 3;
}

int main() {
	int n;
	while (cin >> n && n != 0) {
		Rectangle r1;
		Rectangle r2;
		llegeix(r2);

		--n;

		bool intersec = true;

		while (intersec && n != 0) {
			r1.x_left = r2.x_left;
			r1.x_right = r2.x_right;
			r1.y_down = r2.y_down;
			r1.y_up = r2.y_up;

			llegeix(r2);

			if (relationship(r1, r2) == 0) {
				intersec = false;
			}
			else if (relationship(r1, r2) == 1) {
				r2.x_left = r1.x_left;
				r2.x_right = r1.x_right;
				r2.y_up = r1.y_up;
				r2.y_down = r1.y_down;
			} 
			else if (relationship(r1, r2) == 3) {
				if (r1.x_left > r2.x_left) r2.x_left = r1.x_left;
				if (r1.x_right < r2.x_right) r2.x_right = r1.x_right;
				if (r1.y_down > r2.y_down) r2.y_down = r1.y_down;
				if (r1.y_up < r2.y_up) r2.y_up = r1.y_up;
			}

			--n;
		}

		if (not intersec) {
			cout << "empty intersection" << endl;

			while (n != 0) {
				llegeix(r2);
				--n;
			}
		} 
		else {
			cout << "bottom left point = (" << r2.x_left << ", " << r2.y_down << ");";
			cout << " top right point = (" << r2.x_right << ", " << r2.y_up << ")" << endl;
		}
	}

	return 0;
}