#include <iostream>
#include <cstdlib>
using namespace std;

void print(int a, int b) {
	cout << a + b << endl;
}

void main() {
	char str[] = "100";
	int a = 200;
	int b = atoi(str); // atoi : ���ڷ� ���� ���ڿ��� int������ �ٲپ��ִ� �Լ�.
	print(a, b);
}