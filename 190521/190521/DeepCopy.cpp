#include <iostream>
#include <string>
using namespace std;


class MyData {
public :
	MyData(int nParam) {
		m_pnData = new int;
		*m_pnData = nParam;
	}
	MyData(const MyData &rhs) {
		cout << "MyData(const MyData &)" << endl;
		m_pnData = new int;
		*m_pnData = *rhs.m_pnData;
	}
	int GetData() {
		if (m_pnData != NULL)
			return *m_pnData;
		return 0;
	}
	~MyData() {
		delete m_pnData;
		cout << "called destructor!" << endl;
	}
private : 
	int *m_pnData = nullptr;
};

void main() {
	MyData a(10);
	MyData b(a);
	cout << a.GetData() << endl;
	cout << b.GetData() << endl;
}