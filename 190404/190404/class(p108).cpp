#include <iostream>
using namespace std;

class Point {
public :
	int x;
	int y;
	void Print();
};

void main() {
	Point point = { 1, 2 };
	point.Print();
}

void Point::Print() {
	cout << "x ÁÂÇ¥ : " << x << endl;
	cout << "y ÁÂÇ¥ : " << y << endl;
}