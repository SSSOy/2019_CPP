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
	//�Ļ�Ŭ������ �����ڸ� �����ϱ� �� ����Ŭ������ �⺻ �����ڰ� ���� ����ȴ�.

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