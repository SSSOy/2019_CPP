#include <iostream>
using namespace std;

class Student {
private:
	int nHakbun;
	const char *sName;
public:
	Student();
	Student(int, const char *);
	void show();
};
Student::Student() {
	nHakbun = 2202;
	sName = "�ڼҿ�";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}
Student::Student(int nHakbun, const char *sName) {
	this->nHakbun = nHakbun;
	this->sName = sName;
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}

void Student::show() {
	cout << "�й� : " << nHakbun << endl;
	cout << "�̸� : " << sName << endl;
}
void main() {
	Student st1;
	Student st2(2201, "������");
	st1.show();
	st2.show();
}