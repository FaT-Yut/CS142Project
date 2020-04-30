#include "Doctor.h"

int Doctor::counter = 0;

Doctor::Doctor() : Employee("John", "Doe", "N/A", 0, "N/A", 0, 0, 0, "N/A", 'M',
    0), specialty_("N/A"), degree_("N/A"), medSchool_("N/A"), certified_(false),
    patArray_(0), appArray_(0) {}

Doctor::Doctor(std::string fName, std::string lName, std::string stAdress,
    int zip, std::string city, int dayBirth, int monthBirth, int yearBirth,
    std::string ssn, char gender, double salary, std::string specialty, std::string degree,
    std::string medSchool, bool certified)
    : Employee(fName, lName, stAdress, zip, city, dayBirth, monthBirth,
        yearBirth, ssn, gender, salary), specialty_(specialty), degree_(degree),
    medSchool_(medSchool), certified_(certified)
{
    docID_ = counter++;

}


void Doctor::addPatient(Patient* pat)
{
    nbPatients_++;
    Patient** temp = new Patient * [nbPatients_];
    for (int i = 0; i < (nbPatients_ - 1); i++)
    {
        temp[i] = patArray_[i];
    }
    temp[(nbPatients_ - 1)] = pat;

    delete[] patArray_;

    patArray_ = new Patient * [nbPatients_];
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

void Doctor::deleteAppointment(int idPatient, int hour, int day, int month, int year)
{


    for (int i = 0; i < nbApp_; i++) // find the index of the app to be replaced and replaces the variables
    {
        if (appArray_[i]->patientID_ == idPatient)
        {
            appArray_[i]->hour_ = hour;
            appArray_[i]->day_ = day;
            appArray_[i]->month_ = month;
            appArray_[i]->year_ = year;
        }
    }

}

void Doctor::cancelAppointment(int idPatient)
{
    int index = 0;
    Appointment** temp = new Appointment * [(nbApp_ - 1)]; // create a temp array of pointers that will represent the size &
                                                    // value that we are changing the array to

    for (int i = 0; i < nbApp_; i++) // find the index of the app to be taken out of the array
    {
        if (appArray_[i]->patientID_ == idPatient)
        {
            index = i;
        }
    }

    // ensure that we aren't violating the space in memory that is one after the array
    if (index != (nbApp_ - 1))
    {
        for (int i = 0; i < index; i++)
        {
            temp[i] = appArray_[i];

        }
        for (index; index < nbApp_; index++)
        {
            if (index != (nbApp_ - 1))
            {
                temp[index] = appArray_[(index + 1)];
            }
        }
    }
    else
    {
        for (int i = 0; i < (nbApp_ - 1); i++)
        {
            temp[i] = appArray_[i];
        }
    }
    delete[] appArray_;
    nbApp_--;
    appArray_ = new Appointment * [nbApp_];
    for (int i = 0; i < nbApp_; i++)
    {
        appArray_[i] = temp[i];
    }
    delete[] temp;
}

int Doctor::getAppNumber()
{
    return nbApp_;
}

Appointment** Doctor::getAppArray()
{
    return appArray_;
}
