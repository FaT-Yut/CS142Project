#pragma once
#include "Employee.h"

// derived class of Employee
 class Nurse : public Employee
 {
 public:
   // constructors
   Nurse();

   // standard parameterized constructor that autogenerates a nurse ID
   Nurse(std::string, std::string, std::string, int, std::string, int, int, int,
     std::string, char, double, std::string, bool, int);

   // parameterized constructor to use when the nurse ID is already known such
   // as when reading from a file
   Nurse(std::string, std::string, std::string, int, std::string, int, int, int,
     std::string, char, double, std::string, bool);

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

 private:
   static int nurseIDs_; // Nurses have own static int for ID
   std::string specialty_;
   bool practitioner_;
   int idNurse_;
 };
