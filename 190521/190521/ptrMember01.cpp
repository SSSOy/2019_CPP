#include <iostream>
using namespace std;

class Cat {
private:
	int age;
	const char* name;
public:
	Cat() {
		age = 18;
		name = "������";
	}
	~Cat() {}
	int getAge() { return age; }
	void setAge(int age) { this->age = age; }
	char* getName() { return (char *)name; }
	void setName(const char* name) { this->name = name; }
	
};

void main() {
	Cat* pCat = new Cat;
	cout << "����� ���� : " << pCat->getAge() << ", ����� �̸� : " << pCat->getName() << endl;
	pCat->setAge(10);
	pCat->setName("����");
	cout << "����� ���� : " << pCat->getAge() << ", ����� �̸� : " << pCat->getName() << endl;
}