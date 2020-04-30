#pragma once
#include "Doctor.h"
#include "Nurse.h"

class Clinic
{
public:
    Clinic();
    Clinic(Nurse**, Doctor**, int);

    void addNurse(Nurse* nurse);
    void delNurse(Nurse*);
    bool checkNurse(int hour, int day, int month, int year, int idNurse);

private:
    int nursesInAR_;
    Nurse** arNurses_;
    Doctor** arDoctors_;
};
