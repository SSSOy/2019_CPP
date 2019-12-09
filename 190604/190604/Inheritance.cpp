#include <iostream>
#include <string>
using namespace std;

class Person {
private :
	string name;
	int age;
public :
	Person(const string &name, int age) {
		this->name = name;
		this->age = age;
	}
	void ShowPerson() {
		cout << name << "의 나이는 " << age << "입니다. " << endl;
	}
};

class Student : public Person {
private :
	int id;
public :
	Student(int id, const string &name, int age) : Person(name, age) {
		//Student 생성자를  실행하기 전 기초(상위)클래스의 Person의 생성자를 호출하여 실행 후
		//하위 클래스인 Student의 생성자를 실행한다.
		this->id = id;
	}
};

void main() {
	Student st(2202, "박소영", 18);
	//매개변수 3개를 갖는 생성자 Student() 호출
	st.ShowPerson();
}