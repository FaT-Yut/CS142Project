#include "Doctor.h"

int Doctor::counter = 0

Doctor::Doctor()
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
  std::string specialty_ = "N/A";
  std::string degree_ = "N/A";
  std::string medSchool_ = "N/A";
}

Doctor::Doctor(std::string first, std::string last, std::string address, int zip, std::string city, int day, int month, int year, int ssn, char gend, double salary, std::string specialty, std::string degree, std::string medSchool, bool certified, Patient* pat, Appointment* app )
{
  fName_ = first;
  lName_ = last;
  stAddress_ = address;
  zipcode_ = zip;
  city_ = city;
  dayBirth_ = day;
  monthBirth_ = month;
  yearBirth_ = year;
  SSN_ = ssn;
  gender_ = gend;
  salary_ = salary;
  int docID_ = counter;
  std::string specialty_ = specialty;
  std::string degree_ = degree;
  std::string medSchool_ = medSchool;
  bool certified_ = certified;
  Patient* patArray_ = pat;
  Appointment* appArray_ = app;
  counter++;
}
