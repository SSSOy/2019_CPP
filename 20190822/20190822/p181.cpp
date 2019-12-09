#include <iostream>
using namespace std;

class Ride {
public:
	virtual void rideFunc() { //가상함수
		cout << "타다" << endl;
	}
	void rideFunc2() {
		cout << "날다" << endl;
	}
};

class BusRide : public Ride {
public:
	int age;
	void rideFunc() {
		cout << "버스를 타다" << endl;
	}
};

int main() {
	Ride *r1 = new BusRide();
	r1->rideFunc();
	//동적바인딩으로 실행시에 호출이 결정되기 때문에 속도가 느림
	BusRide *r2 = new BusRide();
	r2->rideFunc2();
	//정적 바인딩으로 컴파일에서 호출이 결정되기 때문에 속도가 빠름
	return 0;
}