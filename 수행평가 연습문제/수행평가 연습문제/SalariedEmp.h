#ifndef SALARIEDEMP_H
#define SALARIEDEMP_H

#include "Employee.h"

class SalariedEmp : public Employee {
protected:
	int salary;
public :
	SalariedEmp(int id, string name, int salary);
	~SalariedEmp();
	int CalculatePay() const;
};

#endif