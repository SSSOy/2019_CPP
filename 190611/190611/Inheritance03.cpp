#include <iostream>
#include <string>
using namespace std;

class Person {
private :
	string name; // �ڽ��� Ŭ���� �������� ����
protected :
	string addr; //��Ӱ��迡�� ���� ����
};

class Student : public Person {
public :
	/*void setName(string name) {
		this->name = name;             //name�� private���� �����Ǿ� �ֱ� ������ ����
	} */
	void setAddr(string addr) {
		this->addr = addr;
	}
	string getAddr() {
		return this->addr;
	}
};

void main() {
	Student student1;
	student1.setAddr("��⵵ �����ν� ������");
	cout << student1.getAddr() << endl;
}