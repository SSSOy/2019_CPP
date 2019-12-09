#include <iostream>
using namespace std;

class Animal {
	int age, weight;
public :
	Animal() { cout << "Animal ������" << endl; }
	Animal(int age, int weight) : age(age), weight(weight) {
		cout << "Animal ������2" << endl;
	}
	~Animal() {
		cout << "Animal �Ҹ���" << endl;
	}
};

class Dog : public Animal {
	int b;
public :
	Dog(int age, int weight, int b) : Animal(age, weight), b(b) {
		cout << "Dog ������" << endl;
	}
	~Dog() {
		cout << "Dog �Ҹ���" << endl;
	}
};

void main() {
	Dog d(5, 10, 100);
}