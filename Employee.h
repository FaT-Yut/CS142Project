#pragma once
#include "Person.h"

// derrived class of Person
class Employee : public Person
{
public:
	// constructors
	Employee();
	Employee(std::string, std::string, std::string, int, std::string, int, int,
		int, std::string, char, double);

	// accessor
	double getSalary();

	// setter/mutator
	void setSalary(double newSal);

protected:
	double salary_; // every employee has a their own salary
};
