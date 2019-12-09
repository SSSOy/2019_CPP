#include <iostream>
using namespace std;

int sum(int opr1, int opr2) {
	return opr1 + opr2;
}

void display();

void main() {
	int p = sum(2, 3);
	cout << "sum 함수를 호출하고 얻은 결과 값은 " << p << endl;
	display();
}

void display() {
	cout << "display 함수는 반환형이 없는 함수" << endl;
}