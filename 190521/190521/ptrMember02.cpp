#include <iostream>
using namespace std;

class Cat {
private:
	int *pAge = new int;
	const char *pName = new char;
public:
	Cat() {
		*pAge = 18;
		pName = "퐁퐁이";
	}
	~Cat() {
		delete pAge;
		delete pName;
	}
	int getAge() { return *pAge; }
	void setAge(int age) { *pAge = age; }
	char* getName() { return (char *)pName; }
	void setName(const char* name) {pName = name; }

};

void main() {
	Cat* pCat = new Cat;
	cout << "고양이 나이 : " << pCat->getAge() << ", 고양이 이름 : " << pCat->getName() << endl;
	pCat->setAge(10);
	pCat->setName("우유");
	cout << "고양이 나이 : " << pCat->getAge() << ", 고양이 이름 : " << pCat->getName() << endl;
}