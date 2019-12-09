#include <iostream>
using namespace std;

int main() {
	int arr[4] = { 1, 2, 3, 4 };
	int sum = 0;

	for (int i = 0; i < 4; i++)
		cout << arr << "    ";
	cout << endl;

	for (int i = 0; i < 4; i++)
		cout << &arr[i] << "    ";
	cout << endl;

	for (int i = 0; i < 4; i++)
		cout << arr[i] << "    ";
	cout << endl;

	return 0;
}