#pragma once
#include"Person.h"

class Employee : public Person
{
public:
	Employee();
	Employee(std::string fname, std::string lname, std::string stAdress, int zip, std::string city, int dbirth, int mbirth, int ybirth, std::string ssn, char gen, double salary);

	double getSalary();
	void setSalary(double newSal);


protected:
	double salary_;


};
