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
	sName = "박소영";
	cout << "학번이 등록되었습니다." << endl;
}
Student::Student(int nHakbun, const char *sName) {
	this->nHakbun = nHakbun;
	this->sName = sName;
	cout << "학번이 등록되었습니다." << endl;
}

void Student::show() {
	cout << "학번 : " << nHakbun << endl;
	cout << "이름 : " << sName << endl;
}
void main() {
	Student st[3] = {
		Student(), Student(2201, "문혜경"), Student(2212, "이예진")
	};
	for (int i = 0; i < 3; i++)
		st[i].show();
}