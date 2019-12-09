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
	sName = "박소영";
	cout << "학번이 등록되었습니다." << endl;
}
void Student::show() {
	cout << "학번 : " << nHanbun << endl;
	cout << "이름 : " << sName << endl;
}
void main() {
	Student st1;
	st1.show();
}