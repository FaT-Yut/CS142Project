#include "Nurse.h"

// static variable
int Nurse::nurseIDs_ = 0;

// constructors and destructor
Nurse::Nurse() : Employee("John", "Doe", "N/A", 0, "N/A", 0, 0, 0, "N/A", 'M',
    0), specialty_("N/A"), practitioner_(false)
{
    nurseIDs_++;
    idNurse_ = nurseIDs_; // consider idNurse_ = ++nurseIDs_; ??
}

// standard parameterized constructor that autogenerates a nurse ID
Nurse::Nurse(std::string fName, std::string lName, std::string stAdress, int zip,
    std::string city, int dbirth, int mbirth, int yBirth, std::string ssn,
    char gen, double salary, std::string specialty, bool practitioner) :
    Employee(fName, lName, stAdress, zip, city, dbirth, mbirth, yBirth, ssn, gen,
        salary), specialty_(specialty), practitioner_(practitioner)
{
    nurseIDs_++;
    idNurse_ = nurseIDs_; // consider idNurse_ = ++nurseIDs_; ??
}

// parameterized constructor to use when the nurse ID is already
// known such as when reading from a file
Nurse::Nurse(std::string fName, std::string lName, std::string stAdress, int zip,
    std::string city, int dbirth, int mbirth, int yBirth, std::string ssn,
    char gen, double salary, std::string specialty, bool practitioner, int id) :
    Employee(fName, lName, stAdress, zip, city, dbirth, mbirth, yBirth, ssn, gen,
        salary), specialty_(specialty), practitioner_(practitioner), idNurse_(id)
{
    nurseIDs_++;
}

Nurse::Nurse(const Nurse& orig)
{
    specialty_ = orig.specialty_;
    practitioner_ = orig.practitioner_;
    nurseIDs_++;
    idNurse_ = orig.idNurse_;
    fName_ = orig.fName_;
    lName_ = orig.lName_;
    stAddress_ = orig.stAddress_;
    zipcode_ = orig.zipcode_;
    city_ = orig.city_;
    dayBirth_ = orig.dayBirth_;
    monthBirth_ = orig.monthBirth_;
    yearBirth_ = orig.yearBirth_;
    SSN_ = orig.SSN_;
    gender_ = orig.gender_;
    salary_ = orig.salary_;
}

// accessors:
std::string Nurse::getSpecialy()
{
    return specialty_;
}

bool Nurse::getPractitioner()
{
    return practitioner_;
}

int Nurse::getID()
{
    return idNurse_;
}

// settors/modifiers:
void Nurse::setSpecialty(std::string spec)
{
    specialty_ = spec;
}

void Nurse::setPractitioner(bool pract)
{
    practitioner_ = pract;
}

void Nurse::setID(int ID)
{
    idNurse_ = ID;
}
