#include <iostream>
using namespace std;

class Student {
private :
	char *name;
	int age;
public :
	Student(const char *name, int age) : age(age) {
		this->name = new char[20];
		strcpy_s(this->name, 20, name);
	}
	void ShowInfo() {
		cout << "이름 : " << name << ", ";
		cout << "나이 : " << age << endl;
	}
	void operator=(Student &ref) {
		strcpy_s(name, 20, ref.name);
		age = ref.age;
	}
	~Student() {
		delete[] name;
		cout << "~Student 소멸자 호출" << endl;
	}
};

int main() {
	Student st1("미림인", 18);
	Student st2("마이스터인", 18);
	st1.ShowInfo();
	st2.ShowInfo();

	st2 = st1;

	st1.ShowInfo();
	st2.ShowInfo();

	return 0;
}