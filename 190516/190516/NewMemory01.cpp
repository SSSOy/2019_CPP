#include <iostream>
using namespace std;

void main() {
	int *ptr = new int;
	*ptr = 20;
	cout << *ptr << endl;
	delete ptr;
}