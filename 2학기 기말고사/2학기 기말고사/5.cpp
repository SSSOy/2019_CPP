#include <iostream>
using namespace std;

class Animal {
	int age, weight;
public :
	Animal() { cout << "Animal 持失切" << endl; }
	Animal(int age, int weight) : age(age), weight(weight) {
		cout << "Animal 持失切2" << endl;
	}
	~Animal() {
		cout << "Animal 社瑚切" << endl;
	}
};

class Dog : public Animal {
	int b;
public :
	Dog(int age, int weight, int b) : Animal(age, weight), b(b) {
		cout << "Dog 持失切" << endl;
	}
	~Dog() {
		cout << "Dog 社瑚切" << endl;
	}
};

void main() {
	Dog d(5, 10, 100);
}