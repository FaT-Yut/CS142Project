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
