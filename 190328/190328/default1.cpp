#include <iostream>
using namespace std;

void display(char c = '*', int n = 10) {
	for (int i = 0; i < n; i++)
		cout << c;
	cout << endl;
}

int main() {
	cout << "�ƹ��� �μ��� ���޵��� �ʴ� ��� : ";
	display();
	cout << endl << "ù ��° �μ��� ���޵Ǵ� ��� : ";
	display('@');
	cout << endl << "��� �μ��� ���޵Ǵ� ��� : ";
	display('@', 20);
}