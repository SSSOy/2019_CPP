#include <iostream>
using namespace std;

class CTest {
public:
	CTest() {
		cout << "CTest::CTest()" << endl;
	}
	~CTest() {
		cout << "~CTest::CTest()" << endl;
	}
};
int main() {
	cout << "Begin" << endl;
	CTest a;
	cout << "Begin b" << endl;
	CTest b;
	cout << "End" << endl;

	return 0;
}