#include"Employee.h"

// constructors
Employee::Employee() : Person("John", "Doe", "N/A", 0, "N/A", 0, 0, 0, "N/A",
	'M'), salary_(0) {}

Employee::Employee(std::string fName, std::string lName, std::string address,
	int zipCode, std::string city, int dayBirth, int monthBirth, int yearBirth,
	std::string ssn, char gender, double salary) : salary_(salary),
	Person(fName, lName, address, zipCode, city, dayBirth, monthBirth,
		yearBirth, ssn, gender) {}

// accessor
double Employee::getSalary()
{
	return salary_;
}

// seter/mutater
void Employee::setSalary(double newSal)
{
	salary_ = newSal;
}
