#include <iostream>
using namespace std;

void swap_value(int n1, int n2) {
	int temp = n1;
	n1 = n2;
	n2 = temp;

	cout << "<Swap_Value>\nnum1 : " << n1 << ", num2 : " << n2 << endl << endl;
}

void swap_pointer(int *n1, int *n2) {
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

void swap_reference(int &n1, int &n2) {
	int temp = n1;
	n1 = n2;
	n2 = temp;
}
void main() {
	int num1, num2;
	cout << "정수 2개 입력 : ";
	cin >> num1 >> num2;
	cout << endl;

	swap_value(num1, num2);

	swap_pointer(&num1, &num2);
	cout << "<Swap_Pointer>\nnum1 : " << num1 << ", num2 : " << num2 << endl << endl;
	swap_pointer(&num1, &num2);

	swap_reference(num1, num2);
	cout << "<Swap_Reference>\nnum1 : " << num1 << ", num2 : " << num2 << endl << endl;
}