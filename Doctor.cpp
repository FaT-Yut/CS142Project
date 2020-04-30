#include "Doctor.h"

int Doctor::counter = 0;

Doctor::Doctor()
{
  fName_ = "John";
  lName_ = "Doe";
  stAddress_ = "No address on file";
  zipcode_ = 12345;
  city_ = "City";
  dayBirth_ = 00;
  monthBirth_ = 00;
  yearBirth_ = 00;
  SSN_ = "0";
  gender_ = 'N';
  salary_ = 0;
  std::string specialty_ = "N/A";
  std::string degree_ = "N/A";
  std::string medSchool_ = "N/A";
}

Doctor::Doctor(std::string first, std::string last, std::string address, int zip, std::string city, int day, int month, int year, int ssn, char gend, double salary, std::string specialty, std::string degree, std::string medSchool, bool certified)
{
  fName_ = first;
  lName_ = last;
  stAddress_ = address;
  zipcode_ = zip;
  city_ = city;
  dayBirth_ = day;
  monthBirth_ = month;
  yearBirth_ = year;
  SSN_ = ssn;
  gender_ = gend;
  salary_ = salary;
  docID_ = counter;
  specialty_ = specialty;
  degree_ = degree;
  medSchool_ = medSchool;
  certified_ = certified;
  counter++;
  nbPatients_ = 0;
  nbApp_ = 0;
}

void Doctor::addPatient(Patient* pat)
{
  nbPatients_++;
  Patient** temp = new Patient*[nbPatients_];
  for (int i = 0; i < (nbPatients_ - 1); i++)
  {
    temp[i] = patArray_[i];
  }
  temp[(nbPatients_ - 1)] = pat;

  delete[] patArray_;

  patArray_ = new Patient* [nbPatients_];
  for (int i = 0; i < nbPatients_; i++)
  {
    patArray_[i] = temp[i];
  }

  delete[] temp;
}


void Doctor::addAppointment(int idPatient, int hour, int day, int month, int year, int idNurse)
{
    nbApp_++; // increment the total number of vehicles by one since adding a new vehicle
    Appointment** temp = new Appointment * [nbApp_]; // create a temp array of pointers that will represent the value that we are changing the array to
    for (int i = 0; i < (nbApp_ - 1); i++) // put in old values into new array up to the last spot
    {
        temp[i] = appArray_[i];
    }
    Appointment* tempApp;
    tempApp->hour_ = hour;
    tempApp->day_ = day;
    tempApp->month_ = month;
    tempApp->year_ = year;
    tempApp->patientID_ = idPatient;
    tempApp->nurseID_ = idNurse;

    temp[(nbApp_ - 1)] = tempApp; // fill the last spot with the new vehicle being added

    delete[] appArray_; // deallocate the old arrary held within Vehicle** availableVehicles_

    appArray_ = new Appointment * [nbApp_]; // allocate the new memory needed to hold the slightly bigger array
    for (int i = 0; i < nbApp_; i++) // fill new memory allocated with the correct value stored in temp
    {
        appArray_[i] = temp[i];
    }

    delete[] temp; // deallocate temp


}

void deleteAppointment(int idPatient, int hour, int day, int month, int year)
{

}
