#ifndef SALESPERSON_H
#define SALESPERSON_H

#include "SalariedEmp.h"

class SalesPerson : public SalariedEmp {
private :
	int sales;
	int incentive;
public :
	SalesPerson(int id, string name, int salary, int sales, int incenive);
	~SalesPerson();
	int CalculatePay() const;
};

#endif
