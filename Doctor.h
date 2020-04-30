#include "Employee.h"
#include "Appointment.h"

class Doctor : public Employee
{
public:
  Doctor();
  Doctor(std::string first, std::string last, std::string address, int zip, std::string city, int day, int month, int year, int ssn, char gend, double salary, std::string specialty, std::string degree, std::string medSchool, bool certified);

void addPatient(Patient* pat);

void addAppointment(int idPatient, int hour, int day, int month, int year, int idNurse);

void deleteAppointment(int idPatient, int hour, int day, int month, int year);


private:
  int docID_;
  std::string specialty_;
  std::string degree_;
  std::string medSchool_;
  bool certified_;
  Patient** patArray_;
  Appointment** appArray_;
  static int counter;
  int nbApp_;
  int nbPatients_;
};
