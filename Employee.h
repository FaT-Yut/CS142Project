#pragma once
#include "Person.h"
#include <string>

// derrived class of Person
class Employee : public Person
{
public:
	// constructors
	Employee();
	Employee(std::string fname, std::string lname, std::string stAdress, int zip, std::string city, int dbirth, int mbirth, int ybirth, std::string ssn, char gen, double salary);
	// accessor
	double getSalary();
	// setter/mutator
	void setSalary(double newSal);


protected:
	double salary_; // every employee has a their own salary


};
