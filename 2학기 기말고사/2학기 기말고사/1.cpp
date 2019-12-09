#include <iostream>
#include <string>
using namespace std;

class Person {
	char *name;
	int age;

public :
	Person(const char *myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname);
		age = myage;
	}
	void ShowPerson() {
		cout << "이름 : " << name << "  ";
		cout << "나이 : " << age << endl;
	}
	~Person() {
		delete[] name;
		cout << "called destructor!" << endl;
	}
	Person(const Person &rhs) {
		int len = strlen(rhs.name) + 1;
		name = new char[len];
		strcpy_s(name, len, rhs.name);
		age = rhs.age;
	}
};

int main() {
	Person man1("Lee Mirim", 18);
	Person man2 = man1;
	man1.ShowPerson();
	man2.ShowPerson();

	return 0;
}