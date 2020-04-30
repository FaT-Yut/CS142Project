#pragma once
#include <string>

// fName, lName, stAddress, zipCode, city, dayBirth,
// monthBirth, yearBirth, SSN, gender

class Person
{
public:
	// Constructors
	Person();
	Person(std::string, std::string, std::string, int, std::string, int, int, int,
		std::string, char);
	Person(const Person&);

protected:
	std::string fName_;
	std::string lName_;
	std::string stAddress_;
	int zipcode_;
	std::string city_;
	int dayBirth_;
	int monthBirth_;
	int yearBirth_;
	std::string SSN_;
	char gender_;
};
