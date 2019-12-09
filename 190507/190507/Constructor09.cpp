#include <iostream>
using namespace std;

class CReTest {
private :
	int &m_nData;
public:
	CReTest(int rParam) : m_nData(rParam) { 
		//rParam은 매개변수이므로 생성자 호출이 끝난 후 소멸 -> rParam을 참조하던 m_nData는 쓰레기 값을 가진다.
		cout << "생성자" << m_nData << endl;
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