#include <iostream>
using namespace std;

class Cat {
private:
	int age;
	const char* name;
public:
	Cat() {
		age = 18;
		name = "퐁퐁이";
	}
	~Cat() {}
	int getAge() { return age; }
	void setAge(int age) { this->age = age; }
	char* getName() { return (char *)name; }
	void setName(const char* name) { this->name = name; }
	
};

void main() {
	Cat* pCat = new Cat;
	cout << "고양이 나이 : " << pCat->getAge() << ", 고양이 이름 : " << pCat->getName() << endl;
	pCat->setAge(10);
	pCat->setName("우유");
	cout << "고양이 나이 : " << pCat->getAge() << ", 고양이 이름 : " << pCat->getName() << endl;
}