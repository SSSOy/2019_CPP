#include <iostream>
using namespace std;

struct Point {
	int x, y;

	void print() {
		cout << "x ÁÂÇ¥ : " << x << endl;
		cout << "y ÁÂÇ¥ : " << y << endl;
	}
};

void main() {
	Point point = { 3, 4 };
	Point *Ppoint = &point;
	
	point.print();
}