#include "SalesPerson.h"

SalesPerson::SalesPerson(int id, string name, int salary, int sales, int incentive) : SalariedEmp(id, name, salary) {
	this->sales = sales;
	this->incentive = incentive;
}
SalesPerson::~SalesPerson() { }
int SalesPerson::CalculatePay() const{
	return (sales * incentive) + SalariedEmp::CalculatePay();
}