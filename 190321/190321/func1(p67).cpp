#include <iostream>
using namespace std;

int sum(int opr1, int opr2) {
	return opr1 + opr2;
}

void display();

void main() {
	int p = sum(2, 3);
	cout << "sum �Լ��� ȣ���ϰ� ���� ��� ���� " << p << endl;
	display();
}

void display() {
	cout << "display �Լ��� ��ȯ���� ���� �Լ�" << endl;
}