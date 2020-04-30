#include "Clinic.h"
#include <iostream>

Clinic::Clinic(): arNurses_(0), arDoctors_(0), nbNurses_(0), nbDocs_(0) {}

Clinic::Clinic(Nurses** nurses, Doctor** doctors, int nbNurses, int nbDocs):
arNurses_(nurses), arDoctors_(doctors), nbNurses_(nbNurses), nbDocs_(nbDocs) {}

Clinic::~Clinic()
{
  if (arNurses_ != 0)
  {
    for (int i = 0; i < nbNUrses_; i++)
    {
      delete[] arNurses_[i];
    }
  }

  if (arDoctors_ != 0)
  {
    for (int i = 0; i < nbDocs_; i++)
    {
      delete[] arDoctors_[i];
    }
  }

  delete[] arNurses_;
  delete[] arDoctors_;
}

void Clinic::addNurse()
{
  std::cout << "First name of the nurse?" << std::endl;
  std::string fName;
  std::cin >> fName;
  std::cout << "Last name of the nurse?" << std::endl;
  std::string lName;
  std::cin >> lName;
  std::cout << "Address of the nurse?" << std::endl;
  std::string address;
  std::cin >> address;
  std::cout << "Zipcode of the nurse?" << std::endl;
  int zipCode;
  std::cin >> zipCode;
  std::cout << "City of the nurse?" << std::endl;
  std::string city;
  std::cin >> city;
  std::cout << "Day of birth of the nurse?" << std::endl;
  int dBirth;
  std::cin >> dBirth;
  std::cout << "Month of birth of the nurse?" << std::endl;
  int mBirth;
  std::cin >> mBirth;
  std::cout << "Year of birth of the nurse?" << std::endl;
  int yBirth;
  std::cin >> yBirth;
  std::cout << "SSN of the nurse?" << std::endl;
  std::string SSN;
  std::cin >> SSN;
  std::cout << "Gender of the nurse?" << std::endl;
  std::string gender;
  std::cin >> gender;
  std::cout << "Salary of the nurse?" << std::endl;
  int salary;
  std::cin >> salary;
  std::cout << "Speciality of the nurse?" << std::endl;
  std::string speciality;
  std::cin >> speciality;
  std::cout << "Is this nurse a practioner?" << std::endl;
  std::string answer;
  std::cin >> answer;
  bool pract;
  if (answer == "yes")
  {
    pract = true;
  }
  else
  {
    pract = false;
  }
  std::cout << "Nurse ID?" << std::endl;
  int nurseID;
  std::cin >> nurseID;

  Nurse nurse(fName, lName, address, zipCode, city, dBirth, mBirth, yBirth,
      SSN, gender, salary, speciality, pract, nurseID)
  Nurse* ptr = &nurse;

  arNurses_[nbNurses++] = ptr;
}

void Clinic::delNurse(int nurseID)
{
    for (int i = 0; i < nursesInAR_; i++)
    {
        // Finds the nurse object in the array and
        // deletes the object
        if (arNurses_[i]->getID() == nurseID)
        {
            delete[] arNurses_[i];

            // Keeps size of the array, but moves each Nurse up
            // in the array so that a new Nurse can be added
            for (int j = i; j < (nursesInAR_ - 1); j++)
            {
                arNurses_[j] = arNurses_[j + 1];
            }
        }
    }
}

bool Clinic::checkNurse(int hour, int day, int month, int year, int idNurse)
{
    bool booked = false;

    for (int i = 0; i < nbDocs_; i++)
    {
       Appointment** appArray = arDoctors_[i]->getAppArray();
        for (int j = 0; j < arDoctors_[i]->getAppNumber(); j++)
        {
            if (appArray[j]->hour_ == hour&& appArray[j]->day_ == day &&
              appArray[j]->month_ == month && appArray[j]->year_ == year &&
              appArray[j]->nurseID_ == idNurse)
            {
                booked = true;
            }
        }
    }

    return booked;
}
