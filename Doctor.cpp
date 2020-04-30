#include "Doctor.h"

int Doctor::counter = 0;

Doctor::Doctor() : Employee("John", "Doe", "N/A", 0, "N/A", 0, 0, 0, "N/A", 'M',
 0), specialty_("N/A"), degree_("N/A"), medSchool_("N/A"), certified_(false),
patArray_(0), appArray_(0) {}

Doctor::Doctor(std::string fName, std::string lName, std::string stAdress,
  int zip, std::string city, int dayBirth, int monthBirth, int yearBirth,
  int ssn, char gender, double salary, std::string specialty, std::string degree,
  std::string medSchool, bool certified, Patient* pat, Appointment* app)
  : Employee(fName, lName, stAdress, zipCode, city, dayBirth, monthBirth,
		yearBirth, ssn, gender, salary), specialty_(specialty), degree_(degree),
    medSchool_(medSchool), certified_(certified), patArray_(pat), appArray_(app)
    {}
{
  int docID_ = counter++; // ??
}
