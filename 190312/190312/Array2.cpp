#include <iostream>
using namespace std;

int main() {
	int arr[4] = { 1, 2, 3, 4 };
	int sum = 0;

	for (int i = 0; i < 4; i++)
		sum += arr[i];

	cout << "�հ� : " << sum << endl;
	cout << "��� : " << (float)sum / 4 << endl;

	return 0;
}