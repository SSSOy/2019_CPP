#include <iostream>
using namespace std;

class Shape {
public :
	void paintfunc1() { paintfunc2(); }
	void paintfunc2() { cout << "Shape function called" << endl; }
};
class Circle : public Shape {
public  : 
	void paintfunc2() { cout << "Circle function called" << endl; }
};

int main() {
	Circle c1; 
	c1.paintfunc2();
	Shape s1;
	Shape *p = &s1;
	p->paintfunc2();
	p = &c1;
	p->paintfunc2();
	p->paintfunc1();

	return 0;
}