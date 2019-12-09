#include "Employee.h"
#include <iostream>

Employee::Employee(int id, string name) {
	this->id = id;
	this->name = name;
}

void Employee::Print() const{
	cout << id << "\t" << name << "\t" << CalculatePay() << endl;
 }