#include <iostream>
using namespace std;

struct Point {
	int x, y;
	void print();
};

void main() {
	Point point = { 3, 4 };
	Point *Ppoint = &point;

	point.print();
}

void Point :: print() {
	cout << "x ÁÂÇ¥ : " << x << endl;
	cout << "y ÁÂÇ¥ : " << y << endl;
}
