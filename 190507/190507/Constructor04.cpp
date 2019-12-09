#include <iostream>
using namespace std;

class CTest {
	int m_nData;
public:
	CTest(int nParam) : m_nData(nParam) {
		cout << "CTest::CTest()" << endl;
	}
	~CTest() {
		cout << "~CTest::CTest()" << m_nData << endl;
	}
};
int main() {
	cout << "Begin" << endl;
	CTest a(10);
	cout << "Begin b" << endl;
	CTest b(20);
	cout << "End" << endl;

	return 0;
}