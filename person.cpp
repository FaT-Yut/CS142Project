#include "Person.h"

Person::Person() : fName_("John"), lName_("Doe"), stAddress_("123 Address St"), zipcode_(12345),
	city_("City"), dayBirth_(0), monthBirth_(0), yearBirth_(0), SSN_("0"), gender_('N') {}

Person::Person(std::string fName, std::string lName, std::string address, int zipCode,
std::string city, int dayBirth, int monthBirth, int yearBirth, std::string SSN, char gender) :
	fName_(fName), lName_(lName), stAddress_(address), zipcode_(zipCode), city_(city), 
	dayBirth_(dayBirth), monthBirth_(monthBirth), yearBirth_(yearBirth), SSN_(SSN), gender_(gender) {}

Person::Person(const Person& ogPerson) : fName_(ogPerson.fName_), lName_(ogPerson.lName_),
	stAddress_(ogPerson.stAddress_), zipcode_(ogPerson.zipcode_), city_(ogPerson.city_), dayBirth_(ogPerson.dayBirth_),
	monthBirth_(ogPerson.monthBirth_), yearBirth_(ogPerson.yearBirth_), SSN_(ogPerson.SSN_), gender_(ogPerson.gender_) {}

std::string Person::getFName()
{
	return fName_;
}

std::string Person::getLName() 
{
	return lName_;
}

std::string Person::getAddress() 
{
	return stAddress_;
}

int Person::getZipCode()
{
	return zipcode_;
}

std::string Person::getCity()
{
	return city_;
}

int Person::getDayBirth()
{
	return dayBirth_;
}

int Person::getMonthBirth()
{
	return monthBirth_;
}

int Person::getYearBirth() 
{
	return yearBirth_;
}

std::string Person::getSSN()
{
	return SSN_;
}

char Person::getGender()
{
	return gender_;
}

void Person::setFName(std::string fName)
{
	fName_ = fName;
}

void Person::setLName(std::string lName)
{
	lName_ = lName;
}

void Person::setAddress(std::string address)
{
	stAddress_ = address;
}

void Person::setZipCode(int zipCode)
{
	zipcode_ = zipCode;
}

void Person::setCity(std::string city)
{
	city_ = city;
}

void Person::setDayBirth(int dayBirth)
{
	dayBirth_ = dayBirth;
}

void Person::setMonthBirth(int monthBirth)
{
	monthBirth_ = monthBirth;
}

void Person::setYearBirth(int yearBirth)
{
	yearBirth_ = yearBirth;
}

void Person::setSSN(std::string SSN)
{
	SSN_ = SSN;
}

void Person::setGender(char gender)
{
	gender_ = gender;
}
