#include <iostream>
using namespace std;

class CReTest {
private :
	int &m_nData;
public:
	CReTest(int rParam) : m_nData(rParam) { 
		//rParam�� �Ű������̹Ƿ� ������ ȣ���� ���� �� �Ҹ� -> rParam�� �����ϴ� m_nData�� ������ ���� ������.
		cout << "������" << m_nData << endl;
	};
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