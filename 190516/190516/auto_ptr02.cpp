#include <iostream>
#include <memory>
using namespace std;

class CMyData {
public:
	CMyData() { cout << "CMyData()" << endl; }
	~CMyData() { cout << "~CMyData()" << endl; }
};

int main() {
	cout << "*****Begin*****" << endl;
	{
		//배열로 하면 첫 번째만 지워지기 때문에 오류남
		auto_ptr < CMyData> ptrTest(new CMyData[3]);
	}

	cout << "******End******" << endl;
}