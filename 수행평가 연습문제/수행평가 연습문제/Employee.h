#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
	int id;
	string name;
public :
	Employee(int id, string name);
	virtual int CalculatePay() const = 0;
	void Print() const;
};

#endif