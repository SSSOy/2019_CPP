#include <iostream>
using namespace std;

class BoxNum {
private : 
	int num1, num2;
public : 
	BoxNum(int num1, int num2) : num1(num1), num2(num2) {}
	void showNum() {
		cout << "num1 : " << num1 << ", num2 : " << num2 << endl;
	}
	BoxNum operator+(BoxNum &ref) {
		return BoxNum(num1 + ref.num1, num2 + ref.num2);
		//                     num1과 num2는 nb1의 멤버변수
	}
};

void main() {
	BoxNum nb1(10, 20);
	BoxNum nb2(3, 4);
	BoxNum result = nb1 + nb2;
	//BoxNum result = nb1.operator+(nb2);
	nb1.showNum();
	nb2.showNum();
	result.showNum();
}