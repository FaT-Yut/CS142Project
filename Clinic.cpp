#include "Clinc.h"

Clinic::Clinic(): arNurses_(0), arDoctors_(0), nbNurses_(0) {}

Clinic::Clinic(Nurses** nurses, Doctor** doctors, int nbNurses):
arNurses_(nurses), arDoctors_(doctors), nbNurses_(nbNurses) {}

void Clinic::addNurse(Nurse nurse)
{
  Nurse* ptr = &nurse;
  // Places the nurse in the next avaiable spot and then moves the
  // pointer to the next spot
  arNurses_[nbNurses_++] = ptr;
}

void Clinic::delNurse(Nurse nurse)
{
    for (int i = 0; i < nbNurses_; i++)
    {
      // Finds the nurse object in the array and
      // deletes the object
      if (arNurses_[i] == nurse)
      {
        delete arNurses_[i];

        // Keeps size of the array, but moves each Nurse up
        // in the array so that a new Nurse can be added
        for (j = i; j < (nbNurses_ - 1); j++)
        {
          arNurses_[j] = arNurses_[j + 1];
        }
      }
    }
}

bool Clinc::checkNurse(int hour, int day, int month, int year, int idNurse)
{
  bool booked = false;
  int nbDocs = 2;

  for (int i = 0; i < nbDocs; i++)
  {
    if (arDoctors_[i].getAppointment().day == day &&
    arDoctors_[i].getAppointment().month == month &&
    arDoctors_[i].getAppointment().year == year &&
    arDoctors_[i].getAppointment().hour == hour &&
    arDoctors_[i].getAppointment().nurseID == idNurse)
    {
      // Check nurse avaiablility
      booked = true;
    }
  }

  return booked;
}
