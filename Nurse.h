#pragma once
#include "Employee.h"
#include <string>

// derived class of Employee
 class Nurse : public Employee
 {
   public:
       // constructors
       Nurse();
       // standard parameterized constructor that autogenerates a nurse ID
       Nurse(std::string specialty, bool practitioner, int ID, std::string fname,
           std::string lname, std::string stAdress, int zip, std::string city, int dbirth,
           int mbirth, int ybirth, std::string ssn, char gen, double salary);
       // parameterized constructor to use when the nurse ID is already known such as when reading from a file
       Nurse(std::string specialty, bool practitioner, std::string fname,
           std::string lname, std::string stAdress, int zip, std::string city, int dbirth,
           int mbirth, int ybirth, std::string ssn, char gen, double salary);
       // copy constuctor
       Nurse(const Nurse& orig);

       // accessors:
       std::string getSpecialy();
       bool getPractitioner();
       int getID();

       // setters/modifiers:
       void setSpecialty(std::string);
       void setPractitioner(bool);
       void setID(int);

       // other functions:


   private:
       // static Variable:
       static int nurseIDs_;   // Nurses have own static int for ID
       // other Variables:
       std::string specialty_;
       bool practitioner_;
       int idNurse_;
 };
