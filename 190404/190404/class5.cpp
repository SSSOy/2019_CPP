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
	Student st[3] = {
		Student(), Student(2201, "������"), Student(2212, "�̿���")
	};
	for (int i = 0; i < 3; i++)
		st[i].show();
}