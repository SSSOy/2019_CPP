#include <iostream>
using namespace std;

class Point {
	int x;
	int y;
	void Print() {
		cout << "x ÁÂÇ¥ : " << x << endl;
		cout << "y ÁÂÇ¥ : " << y << endl;
	}
};

void main() {
	Point point = { 1, 2 };
	point.Print();
}