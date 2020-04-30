#pragma once
#include "Doctor.h"
#include "Nurse.h"

class Clinic
{
public:
    Clinic();
    Clinic(Nurse**, Doctor**, int, int);
    ~Clinic();

    void addNurse();
    void delNurse(int);
    bool checkNurse(int hour, int day, int month, int year, int idNurse);

private:
    int nursesInAR_;
    int nbDocs_;
    Nurse** arNurses_;
    Doctor** arDoctors_;
};
