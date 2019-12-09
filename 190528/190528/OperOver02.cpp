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
		cout << "�̸� : " << name << endl << "���� : " << age << endl;
	}
	Student& operator=(Student &ref) {
	//operatro =�Լ��� ��ȯ���� ��ü�� ���������� st2�� �����ϰ� �ȴ�.
		delete[] name;
		name = new char[20];	//�޸� ������ ���� ���� ���� �� �ٽ� �Ҵ��Ѵ�.
		strcpy_s(name, 20, ref.name);
		age = ref.age;
		return *this;
	}
	~Student() {
		delete[] name;
		cout << "~Student �Ҹ��� ȣ�� !" << endl;
	}
};

void main() {
	Student st1("�̸���", 27);
	Student st2("���̽�����", 10);
	st2 = st1; //���� �ߺ� ������ �Լ� ȣ��
	st1.showInfo();
	st2.showInfo();
}