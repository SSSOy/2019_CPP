#include <iostream>
#include <string>
using namespace std;

class Person {
	char *name;
	int age;
public: 
	Person(const char *myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, 20, myname);
		age = myage;
	}
	void ShowPerson() const {
		cout << "이름 : " << name << "    ";
		cout << "나이 : " << age << endl;
	}
	~Person() {
		delete[] name;
		cout << "called destructor!" << endl;
	}
};

void main() {
	Person man1("Park So Young", 18);
	Person man2(man1);
	//복사생성자가 없으면 기본 복사 생성자를 컴파일러가 만들어준다.

	man1.ShowPerson();
	man2.ShowPerson();

	/*프로그램 종료 시 객체가 소멸될 때 소멸자를 실행하면
	name이 가리키는 메모리가 삭제된다.
	man2다음에 man1이 삭제될 때 이미 지워진 name 메모리를 
	다시 삭제해야 하는 상황이 생기기 때문에 오류가 발생한다.*/
}