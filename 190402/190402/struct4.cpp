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
	cout << "x ��ǥ : " << x << endl;
	cout << "y ��ǥ : " << y << endl;
}
