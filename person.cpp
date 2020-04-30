#include "Person.h"

// constructors
Person::Person() : fName_("John"), lName_("Doe"), stAddress_("N/A"),
zipcode_(0), city_("N/A"), dayBirth_(0), monthBirth_(0), yearBirth_(0),
SSN_("N/A"), gender_('M') {}

Person::Person(std::string fName, std::string lName, std::string address,
	int zipCode, std::string city, int dayBirth, int monthBirth, int yearBirth,
	std::string SSN, char gender) : fName_(fName), lName_(lName), stAddress_(address),
	zipcode_(zipCode), city_(city), dayBirth_(dayBirth), monthBirth_(monthBirth),
	yearBirth_(yearBirth), SSN_(SSN), gender_(gender) {}

Person::Person(const Person& ogPerson) : fName_(ogPerson.fName_), lName_(ogPerson.lName_),
stAddress_(ogPerson.stAddress_), zipcode_(ogPerson.zipcode_), city_(ogPerson.city_),
dayBirth_(ogPerson.dayBirth_), monthBirth_(ogPerson.monthBirth_),
yearBirth_(ogPerson.yearBirth_), SSN_(ogPerson.SSN_), gender_(ogPerson.gender_) {}
