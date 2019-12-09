#include <iostream>
using namespace std;

class BaseData {
public :
	BaseData() 
	{	cout << "BaseData()" << endl;	}
	int getData() 
	{	return m_nData;}
	void setData(int param) { m_nData = param; }
protected :
	void printData() 
	{	cout << "BaseData::PrintData()" << "   ";	}
private :
	int m_nData;
};

class DerivedData : public BaseData {
public  :
	DerivedData() { cout << "DerivedData()" << "   "; }
	//파생클래스의 생성자를 실행하기 전 기초클래스의 기본 생성자가 먼저 실행된다.

	void TestFunc() {
		printData();
		setData(5);
		cout << BaseData::getData() << endl;
	}
};

void main() {
	DerivedData data;
	data.setData(10);
	cout << data.getData() << endl;
	data.TestFunc();
}