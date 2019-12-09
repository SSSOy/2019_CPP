#include <iostream>
using namespace std;

class Car {
	int ton;
	int price;
public :
	static int count;
	static int getCount() {
		int imsi = 0;
		return count + imsi;
		//return count + price -> 오류발생, 정적함수는 정적변수만 사용가능.
	}
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
	cout << "생선된 자동차의 수 : " << car1.getCount() << endl;
	Car car2(10, 3000);
	cout << "생선된 자동차의 수 : " << car2.getCount() << endl;
}