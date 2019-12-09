#include <iostream>
using namespace std;

class BaseData {
public :
	BaseData() { cout << "BaseData()" << endl;}
	int GetData() { return m_nData; }
	void setData(int nParam) { m_nData = nParam; }
protected :
	void PrintData() { cout << "BaseData::PrintData()" << "  "; }
private :
	int m_nData = 0;
};
class DerivedData : public BaseData {
public : 
	DerivedData() { cout << "DerivedData()" << "   ";}
	void TestFunc() {
		PrintData();
		setData(5);
		cout << "BaseData::GetData()" << endl;
	}
};

void main() {
	DerivedData data;
	data.setData(10);
	cout << data.GetData() << endl;
	data.TestFunc();
}