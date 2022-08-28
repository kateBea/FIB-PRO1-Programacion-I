// X82451	POINT INSIDE A RECTANGLE

#include <iostream>
#include <string>

using namespace std;

// Represents a point by its coordinates x,y.
struct Point {
	int x, y;
};

// Reads a point from the standard input and returns it.
Point read_point() {
	Point p;
	cin >> p.x >> p.y;
	return p;
}

// Represents a rectangle by the positions its horizontal limits xmin<xmax
// and the positions of its vertical limits ymin<ymax.
struct Rectangle {
	int xmin, ymin, xmax, ymax;
};

// Reads a rectangle from the input and returns it. Assumes that the input format is correct, i.e. xmin<xmax and ymin<ymax.
Rectangle read_rectangle() {
	Rectangle r;
	cin >> r.xmin >> r.ymin >> r.xmax >> r.ymax;
	return r;
}

// Returns "inside", "border" or "outside" depending on whether
// p is inside, at the border, or outside of r.
string containtment(Point p, Rectangle r) {
	if (p.x < r.xmin) return "outside";
	else if (p.x > r.xmax) return "outside";
	else { //It will be inside of the x limits, we must see if it is for y.
		if (p.y < r.ymin) return "outside";
		else if (p.y > r.ymax) return "outside";
		else if (p.x == r.xmin or p.x == r.xmax) return "border";
		else if (p.y == r.ymin or p.y == r.ymax) return "border";
		else return "inside";
	}
}

int main() {
	int inputs;
	cin >> inputs;

	Point p;
	Rectangle r;

	for (int i = 0; i < inputs; ++i) {
		p = read_point();
		r = read_rectangle();
		string result = containtment(p, r);
		cout << result << endl;
	}

	return 0;
}