#include <iostream>
using namespace std;

void jungjuk() {
	static int a = 0;
	cout << "정적변수 a는 " << a << endl;
	a++;
}

void main() {
	for (int i = 0; i < 3; i++)
		jungjuk();
}