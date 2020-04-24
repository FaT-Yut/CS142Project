#pragma once
#include <string>

// fName, lName, stAddress, zipCode, city, dayBirth, monthBirth, yearBirth, SSN, gender

class Person
{
public:
	// Constructors
	Person();
	Person(std::string, std::string, std::string, int, std::string, int, int, int, std::string, char);
	Person(const Person&);

	// Accessors
	std::string getFName();
	std::string getLName();
	std::string getAddress();
	int getZipCode();
	std::string getCity();
	int getDayBirth();
	int getMonthBirth();
	int getYearBirth();
	std::string getSSN();
	char getGender();

	// Manipulators
	void setFName(std::string);
	void setLName(std::string);
	void setAddress(std::string);
	void setZipCode(int);
	void setCity(std::string);
	void setDayBirth(int);
	void setMonthBirth(int);
	void setYearBirth(int);
	void setSSN(std::string);
	void setGender(char);

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