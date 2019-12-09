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
		cout << "�̸� : " << name << "    ";
		cout << "���� : " << age << endl;
	}
	~Person() {
		delete[] name;
		cout << "called destructor!" << endl;
	}
};

void main() {
	Person man1("Park So Young", 18);
	Person man2(man1);
	//��������ڰ� ������ �⺻ ���� �����ڸ� �����Ϸ��� ������ش�.

	man1.ShowPerson();
	man2.ShowPerson();

	/*���α׷� ���� �� ��ü�� �Ҹ�� �� �Ҹ��ڸ� �����ϸ�
	name�� ����Ű�� �޸𸮰� �����ȴ�.
	man2������ man1�� ������ �� �̹� ������ name �޸𸮸� 
	�ٽ� �����ؾ� �ϴ� ��Ȳ�� ����� ������ ������ �߻��Ѵ�.*/
}