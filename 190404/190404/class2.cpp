#include <iostream>
using namespace std;

class Point {
	int x;
	int y;
	void Print() {
		cout << "x ��ǥ : " << x << endl;
		cout << "y ��ǥ : " << y << endl;
	}
};

void main() {
	Point point = { 1, 2 };
	point.Print();
}