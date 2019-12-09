#include <iostream>
using namespace std;

struct Point {
	int x, y;
}point1;

void main() {
	struct Point point2 = { 3, 4 }; // C스타일
	Point point3 = { 1, 2 }; //C++스타일
	point1.x = 100;
	point1.y = 200;

	point3.x = 123;
	point3.y = 456;
	cout << "점 point1의 좌표는 (" << point1.x << ", " << point1.y << ")" << endl;
	cout << "점 point2의 좌표는 (" << point2.x << ", " << point2.y << ")" << endl;
	cout << "점 point3의 좌표는 (" << point3.x << ", " << point3.y << ")" << endl;

}