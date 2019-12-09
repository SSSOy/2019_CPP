#ifndef HOURLYEMP_H
#define HOURLYEMP_H

#include "Employee.h"

class HourlyEmp : public Employee {
private :
	int hours;
	int payPerHour;
public :
	HourlyEmp(int id, string name, int hours, int payPerHour);
	int CalculatePay() const;
};

#endif