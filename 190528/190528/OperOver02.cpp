#include <iostream>
using namespace std;

class Student {
	char *name;
	int age;
public : 
	Student(const char *name, int age) : age(age) {
		this->name = new char[20];
		strcpy_s(this->name, 20, name);
	}
	void showInfo() {
		cout << "이름 : " << name << endl << "나이 : " << age << endl;
	}
	Student& operator=(Student &ref) {
	//operatro =함수의 반환형은 객체의 참조형으로 st2를 참조하게 된다.
		delete[] name;
		name = new char[20];	//메모리 누수를 막기 위해 해제 후 다시 할당한다.
		strcpy_s(name, 20, ref.name);
		age = ref.age;
		return *this;
	}
	~Student() {
		delete[] name;
		cout << "~Student 소멸자 호출 !" << endl;
	}
};

void main() {
	Student st1("미림인", 27);
	Student st2("마이스터인", 10);
	st2 = st1; //대입 중복 연산자 함수 호출
	st1.showInfo();
	st2.showInfo();
}