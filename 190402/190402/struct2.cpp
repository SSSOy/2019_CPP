#include <iostream>
using namespace std;

struct Point {
	int x, y;
};

void main() {
	Point point = { 3, 4 }; 
	Point *Ppoint = &point;

	cout << "Ppoint 가르키는 좌표는 (" << (*Ppoint).x << ", " << (*Ppoint).y << ")" << endl;
	cout << "Ppoint 가르키는 좌표는 (" << Ppoint -> x << ", " << Ppoint -> y << ")" << endl;
	cout << "Ppoint 가르키는 좌표는 (" << point.x << ", " << point.y << ")" << endl;
}