#pragma once
#include "Employee.h"
#include "Appointment.h"

class Doctor : public Employee
{
public:
  Doctor();
  Doctor(std::string first, std::string last, std::string address, int zip, std::string city, int day, int month, int year, int ssn, char gend, double salary, int docID, std::string specialty, std::string degree, std::string medSchool, bool certified, Patient* pat, Appointment* app );


private:
  int docID_;
  std::string specialty_;
  std::string degree_;
  std::string medSchool_;
  bool certified_;
  Patient* patArray_;
  Appointment* appArray_;
  static int counter;

};
