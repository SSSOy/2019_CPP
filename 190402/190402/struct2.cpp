#include <iostream>
using namespace std;

struct Point {
	int x, y;
};

void main() {
	Point point = { 3, 4 }; 
	Point *Ppoint = &point;

	cout << "Ppoint ����Ű�� ��ǥ�� (" << (*Ppoint).x << ", " << (*Ppoint).y << ")" << endl;
	cout << "Ppoint ����Ű�� ��ǥ�� (" << Ppoint -> x << ", " << Ppoint -> y << ")" << endl;
	cout << "Ppoint ����Ű�� ��ǥ�� (" << point.x << ", " << point.y << ")" << endl;
}