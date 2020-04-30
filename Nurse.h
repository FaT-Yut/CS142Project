#pragma once
#include "Employee.h"
#include <string>

// derived class of Employee
 class Nurse public: Employee
{
  public:
    // constructors and destructor
    Classname();
    Classname(var, var);
    Classname(const Classname& orig)
    ~Classname();

    // accessors:
    int getVar();
    int getVar();

    // setters/modifiers:
    void setVar(varType);
    void setVar(varType);

    // other functions:
    void otherFunction01();
    void otherFunction02();

  Protected:
    // static Variable:
    static int nurseIDs_;   // Nurses have own static int for ID
    // other Variables:
    std::string specialty;
    bool practitioner;
    nbNurses_;
    int idNurse_;
};
