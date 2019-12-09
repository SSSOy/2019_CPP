#include <iostream>
using namespace std;

class Student {
private:
	char *name;
	int age;
public:
	Student(const char* mname, int mage) {
		int len = strlen(mname) + 1;
		name = new char[len];
		strcpy_s(name, len, mname);
		age = mage;
	}
	void show() {
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}
	~Student(){
		delete[] name;
		cout << "called destructor!!" << endl;
	}
};

void main() {
	Student st1("�ڼҿ�", 18);
	Student st2("������", 18);

	st1.show();
	st2.show();
}