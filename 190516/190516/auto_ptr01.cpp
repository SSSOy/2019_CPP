#include <iostream>
#include <memory>
using namespace std;

class CMyData {
public :
	CMyData() { cout << "CMyData()" << endl; }
	~CMyData() { cout << "~CMyData()" << endl; }
};

int main() {
	cout << "*****Begin*****" << endl;
	{
		auto_ptr < CMyData> ptrTest(new CMyData);
	}

	cout << "******End******" << endl;
}