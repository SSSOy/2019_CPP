#include <iostream>
#include <memory>
using namespace std;

class CMyData {
public:
	CMyData() { cout << "CMyData()" << endl; }
	~CMyData() { cout << "~CMyData()" << endl; }
	void TestFunc() { cout << "CMyData::TestFunc()" << endl; }
};

int main() {
	auto_ptr<CMyData> ptrTest(new CMyData);

	auto_ptr<CMyData> ptrNew;

	cout << "0x" << ptrTest.get() << endl;
	// get() ����Լ��� ����� ������ �ּҸ� ��ȯ
	ptrTest->TestFunc();

	ptrNew = ptrTest;
	//������ ptrTest�� NULL�� �ǰ�, ptrNew�� ���������� CMyData�� ����Ų��.
	
	ptrTest->TestFunc();
	cout << "0x" << ptrTest.get() << endl;

	//���� �� �ڵ带 ������ �� ����.
	ptrTest->TestFunc();

	return 0;
}