#include <iostream>
using namespace std;

class Person {
public :
	void printMethod() {
		cout << "Person's Method" << endl;
	}
};

class Student:public Person {
public :
	void printMethod() {
		Person::printMethod();
		cout << "Child Method" << endl;
	}
};

void main() {
	Student st;
	st.printMethod();
}