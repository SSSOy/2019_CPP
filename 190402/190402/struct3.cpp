#include <iostream>
using namespace std;

struct Point {
	int x, y;

	void print() {
		cout << "x ��ǥ : " << x << endl;
		cout << "y ��ǥ : " << y << endl;
	}
};

void main() {
	Point point = { 3, 4 };
	Point *Ppoint = &point;
	
	point.print();
}