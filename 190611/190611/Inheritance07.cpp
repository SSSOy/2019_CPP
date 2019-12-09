#include <iostream>
using namespace std;

class JumsuOne {
public :
	void funcOneShow() {
		cout << "JumsuOne" << endl;
	}
};
class RankTwo {
public :
	void funcTwoShow() {
		cout << "RankTwo" << endl;
	}
};
class SungjukDerived : protected JumsuOne, protected RankTwo {
public :
	void SungjukFuncShow() {
		funcOneShow();
		funcTwoShow();
	}
};

void main() {
	SungjukDerived s;
	s.SungjukFuncShow();
}