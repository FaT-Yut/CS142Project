#pragma once
#include "Employee.h"
#include "Patient.h"
#include "Appointment.h"
#include <iostream>

class Doctor : public Employee
{
public:
    Doctor();
    Doctor(std::string fName, std::string lName, std::string stAdress,
        int zip, std::string city, int dayBirth, int monthBirth, int yearBirth,
        std::string ssn, char gender, double salary, std::string specialty, std::string degree,
        std::string medSchool, bool certified);

    void addPatient(Patient* pat);

    void addAppointment(int idPatient, int hour, int day, int month, int year, int idNurse);

    void deleteAppointment(int idPatient, int hour, int day, int month, int year);

    void cancelAppointment(int idPatient);

    int getAppNumber();

    Appointment** getAppArray();

    void showAppointments();

    ~Doctor();


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
