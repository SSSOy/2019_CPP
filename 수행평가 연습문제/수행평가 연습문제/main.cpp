#include <iostream>

#include "Employee.h"
#include "SalariedEmp.h"
#include "HourlyEmp.h"
#include "SalesPerson.h"
using namespace std;

int main() {
	const int size = 3;
	Employee *p[size];
	p[0] = new HourlyEmp(1, "¹ÚÂùÈ£", 40, 5000);
	p[1] = new SalariedEmp(2, "È«±æµ¿", 1000000);
	p[2] = new SalesPerson(3, "ÀÌ½Â¿±", 1000000, 10, 10000);

	for (int i = 0; i < size; i++)
		p[i]->Print();
	for (int i = 0; i < size; i++)
		delete p[i];
	return 0;
}