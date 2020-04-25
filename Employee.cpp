#include"Employee.h"

// constructors
Employee::Employee()
{
	fName_ = "John";
	lName_ = "Doe";
	stAddress_ = "No address on file";
	zipcode_ = 12345;
	city_ = "City";
	dayBirth_ = 00;
	monthBirth_ = 00;
	yearBirth_ = 00;
	SSN_ = "0";
	gender_ = 'N';
	salary_ = 0;
}


Employee::Employee(std::string fName, std::string lName, std::string address, int zipCode, std::string city, int dayBirth, int monthBirth, int yearBirth, std::string SSN, char gender, double salary)
{
	fName_ = fName;
	lName_ = lName;
	stAddress_ = address;
	zipcode_ = zipCode;
	city_ = city;
	dayBirth_ = dayBirth;
	monthBirth_ = monthBirth;
	yearBirth_ = yearBirth;
	SSN_ = SSN;
	gender_ = gender;
	salary_ = salary;

}
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


