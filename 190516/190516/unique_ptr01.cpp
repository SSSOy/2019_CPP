#include <memory>
#include <iostream>
using namespace std;

int main() {
	unique_ptr<int> ptr(new int);
	*ptr = 100;
	cout << *ptr << endl;

	//delete��� �� �ص� �ȴ�.

	return 0;
}