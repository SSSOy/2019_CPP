#include <iostream>
using namespace std;

class Ride {
public :
	virtual void rideFunc() { //가상함수
		cout << "타다" << endl;
	}
};

class BusRide : public Ride {
public : 
	int age;
	void rideFunc() {
		cout << "버스를 타다" << endl;
	}
};

class AirRide : public Ride {
public :
	int ton;
	void rideFunc() {
		cout << "비행기를 타다" << endl;
	}
};


int main() {
	Ride *r1 = new BusRide();
	r1->rideFunc();
	Ride *r2 = new AirRide();
	r2->rideFunc();
	return 0;
}