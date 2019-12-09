#include <iostream>
#include <cstdlib>
using namespace std;

void print(int a, int b) {
	cout << a + b << endl;
}

void main() {
	char str[] = "100";
	int a = 200;
	int b = atoi(str); // atoi : 숫자로 쓰인 문자열을 int형으로 바꾸어주는 함수.
	print(a, b);
}