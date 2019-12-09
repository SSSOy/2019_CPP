#include <iostream>
using namespace std;

void display(char c = '*', int n = 10) {
	for (int i = 0; i < n; i++)
		cout << c;
	cout << endl;
}

int main() {
	cout << "아무런 인수가 전달되지 않는 경우 : ";
	display();
	cout << endl << "첫 번째 인수만 전달되는 경우 : ";
	display('@');
	cout << endl << "모든 인수가 전달되는 경우 : ";
	display('@', 20);
}