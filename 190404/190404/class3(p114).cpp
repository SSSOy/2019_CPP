#include <iostream>
using namespace std;

class Student {
private :
	int nHanbun;
	const char *sName;
public : 
	Student();
	void show();
};
Student::Student() {
	nHanbun = 2202;
	sName = "�ڼҿ�";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}
void Student::show() {
	cout << "�й� : " << nHanbun << endl;
	cout << "�̸� : " << sName << endl;
}
void main() {
	Student st1;
	st1.show();
}