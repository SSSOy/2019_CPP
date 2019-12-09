#include <iostream>
#include <string>
using namespace std;

class Person {
private :
	string name; // 자신의 클래스 내에서만 접근
protected :
	string addr; //상속관계에서 접근 가능
};

class Student : public Person {
public :
	/*void setName(string name) {
		this->name = name;             //name이 private으로 설정되어 있기 때문에 에러
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
	student1.setAddr("경기도 의정부시 용현동");
	cout << student1.getAddr() << endl;
}