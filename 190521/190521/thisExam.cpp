#include <iostream>
using namespace std;

class Student {
private :
	int grade;
	int ban;
public:
	Student() {
		grade = 3;
		ban = 1;
	}
	void setGrade(int grade) { this->grade = grade; }
	int getGrade() { return grade; }
	void setBan(int ban) { this->ban = ban; };
	int getBan() { return ban; }
};

void main() {
	Student student;
	cout << "학년 : " << student.getGrade() << ", 반 : " << student.getBan() << endl;
	student.setGrade(2);
	student.setBan(2);
	cout << "학년 : " << student.getGrade() << ", 반 : " << student.getBan() << endl;
}