#include <iostream>
using namespace std;

class CReTest {
	int &m_nData;
public:
	CReTest(int &rParam) : m_nData(rParam) { };
	int GetData() { return m_nData; }
};
int main() {
	int a = 10;
	CReTest t(a);

	cout << t.GetData() << endl;

	a = 20;
	cout << t.GetData() << endl;

	return 0;
}