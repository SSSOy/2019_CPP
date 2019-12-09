#include <iostream>
using namespace std;

class Car {
	int ton;
	int price;
public :
	static int count;
	Car() {
		ton = 0;
		price = 1000;
		count++;
	}
	Car(int ton, int price) {
		this->ton = ton;
		this->price = price;
		count++;
	}
	~Car() {
		cout << "소멸자 : " << count-- << endl;
	}
};

int Car::count = 0;

void main() {
	Car car1;
	cout << "생선된 자동차의 수 : " << Car::count << endl;
	Car car2(10, 3000);
	cout << "생선된 자동차의 수 : " << car2.count << endl;
}