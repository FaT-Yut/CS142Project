#pragma once
#include "Employee.h"
#include "Patient.h"
#include "Appointment.h"

class Doctor : public Employee
{
public:
    Doctor();
    Doctor(std::string, std::string, std::string, int, std::string, int, int,
      int, int, char, double, int, std::string, std::string, std::string, bool,
       Patient*, Appointment*);

  void addPatient(Patient* pat);

  void addAppointment(int idPatient, int hour, int day, int month, int year, int idNurse);


private:
    int docID_;
    std::string specialty_;
    std::string degree_;
    std::string medSchool_;
    bool certified_;
    Patient* patArray_;
    Appointment* appArray_;
    static int counter;
    int nbApp_;
    int nbPatients_;
};
