#include <iostream>
using namespace std;

class Ride {
public:
	virtual void rideFunc() { //�����Լ�
		cout << "Ÿ��" << endl;
	}
	void rideFunc2() {
		cout << "����" << endl;
	}
};

class BusRide : public Ride {
public:
	int age;
	void rideFunc() {
		cout << "������ Ÿ��" << endl;
	}
};

int main() {
	Ride *r1 = new BusRide();
	r1->rideFunc();
	//�������ε����� ����ÿ� ȣ���� �����Ǳ� ������ �ӵ��� ����
	BusRide *r2 = new BusRide();
	r2->rideFunc2();
	//���� ���ε����� �����Ͽ��� ȣ���� �����Ǳ� ������ �ӵ��� ����
	return 0;
}