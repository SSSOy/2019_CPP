#include <iostream>
using namespace std;

class BoxNum {
private:
	int num1, num2;
public:
	BoxNum(int num1, int num2) : num1(num1), num2(num2) {}
	void showNum() {
		cout << "num1 : " << num1 << ", num2 : " << num2 << endl;
	}
	 void operator+=(BoxNum &ref) {
		*this = BoxNum(num1 + ref.num1, num2 + ref.num2);
	}
};

void main() {
	BoxNum nb1(10, 20);
	BoxNum nb2(3, 4);
	nb1.showNum();

	//nb1 += nb2;
	nb1.operator+=(nb2);

	nb2.showNum();
	nb1.showNum();
}