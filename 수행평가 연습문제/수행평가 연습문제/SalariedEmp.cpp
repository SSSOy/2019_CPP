#include "SalariedEmp.h"
#include <iostream>
using namespace std;

SalariedEmp::SalariedEmp(int id, string name, int salary) : Employee(id, name) {
	this->salary = salary;
}
SalariedEmp::~SalariedEmp() {}

int SalariedEmp::CalculatePay() const{
	return salary;
}