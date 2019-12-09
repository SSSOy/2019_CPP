#include "HourlyEmp.h"

HourlyEmp::HourlyEmp(int id, string name, int hours, int payPerHour) : Employee(id, name) {
	this->hours = hours;
	this->payPerHour = payPerHour;
}
int HourlyEmp::CalculatePay() const{
	return hours * payPerHour;
}