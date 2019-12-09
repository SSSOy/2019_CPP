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
		cout << name << "�� ���̴� " << age << "�Դϴ�. " << endl;
	}
};

class Student : public Person {
private :
	int id;
public :
	Student(int id, const string &name, int age) : Person(name, age) {
		//Student �����ڸ�  �����ϱ� �� ����(����)Ŭ������ Person�� �����ڸ� ȣ���Ͽ� ���� ��
		//���� Ŭ������ Student�� �����ڸ� �����Ѵ�.
		this->id = id;
	}
};

void main() {
	Student st(2202, "�ڼҿ�", 18);
	//�Ű����� 3���� ���� ������ Student() ȣ��
	st.ShowPerson();
}