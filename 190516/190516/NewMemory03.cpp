#include <iostream>
using namespace std;

class TestC {
	int iData;
public :
	TestC() { cout << "TestC::TestC()" << endl;  }
	~TestC() { cout << "TestC::~TestC()" << endl; }
};

int main() {
	cout << "Main Begin" << endl;
	TestC *ptr = new TestC;
	cout << "Test CPlus" << endl;
	delete ptr;
	cout << "End" << endl;
}