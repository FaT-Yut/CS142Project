#include "Clinic.h"

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

void Clinic::addNurse(Nurse* nurse)
{
    Nurse* ptr = nurse;
    // Places the nurse in the next avaiable spot and then moves the
    // pointer to the next spot
    arNurses_[nursesInAR_++] = ptr;
}

void Clinic::delNurse(Nurse* nurse)
{
    for (int i = 0; i < nursesInAR_; i++)
    {
        // Finds the nurse object in the array and
        // deletes the object
        if (arNurses_[i]->getID() == nurse->getID())
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
