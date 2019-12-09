#include <iostream>
#include <string>
using namespace std;

class Animal {
	int weight, height;
public :
	Animal() {
		cout << "Animal 생성자()" << endl;
	}
	Animal(int weight2, int height2) : weight(weight2), height(height2) {
		// 멤버변수 초기화
		cout << "Animal 생성자(int weight2, int height2)" << endl;
	}
	~Animal() {
		cout << "Animal 소멸자()" << endl;
	}
};

class Dog : Animal {
	int price, volume;
public :
	Dog(int we1, int he1, int pr1, int vo1) : Animal(we1, he1) {
		// :Animal(we1, he1)는 상위 클래스의 생성자를 명시적으로 호출한다.
		// 즉 매개변수 2개를 갖는 상위클래스의 생성자 호출 후 하위클래스의 생성자를 실행한다.
		price = pr1;
		volume = vo1;
		cout << "Dog(int we1, int he1, int pr1, int vo1)" << endl;
	}
	~Dog() { cout << "Dog 소멸자() " << endl; }
};

int main() {
	Dog dog(30, 40, 90, 2000); 

	return 0;
}