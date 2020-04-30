#include "Patient.h"
#include <iostream>

// static variable
int Patient::totalPatients_ = 0;

// constructors & destructor
Patient::Patient() : Person("John", "Doe", "N/A", 0, "N/A", 0, 0, 0, "N/A", 'X'),
allergy_(false), prescriptions_(0), numOfScripts_(0)
{
	idPatient_ += totalPatients_;
}

// parameterized constructor used when creating a brand new patient
Patient::Patient(std::string fName, std::string lName, std::string stAddress,
	int zipCode, std::string city, int dayBirth, int monthBirth, int yearBirth,
	std::string SSN, char gender, bool allergy, std::string* scripts, int numOfScripts)
	: Person(fName, lName, stAddress, zipCode, city, dayBirth, monthBirth,
		yearBirth, SSN, gender), allergy_(allergy), numOfScripts_(numOfScripts),
	prescriptions_(scripts)
{
	idPatient_ += totalPatients_;
}

// parameterized constructor used when reading a pre-existing Patient from a file that already has a patient ID
Patient::Patient(std::string fName, std::string lName, std::string stAddress,
	int zipCode, std::string city, int dayBirth, int monthBirth, int yearBirth,
	std::string SSN, char gender, bool allergy, std::string* scripts,
	int numOfScripts, int id)
	: Person(fName, lName, stAddress, zipCode, city, dayBirth, monthBirth,
		yearBirth, SSN, gender), allergy_(allergy), numOfScripts_(numOfScripts),
	prescriptions_(scripts), idPatient_(id) {}

Patient::Patient(const Patient& Orig)
{
	this->fName_ = Orig.fName_;
	this->lName_ = Orig.lName_;
	this->stAddress_ = Orig.stAddress_;
	this->zipcode_ = Orig.zipcode_;
	this->city_ = Orig.city_;
	this->dayBirth_ = Orig.dayBirth_;
	this->monthBirth_ = Orig.monthBirth_;
	this->yearBirth_ = Orig.yearBirth_;
	this->SSN_ = Orig.SSN_;
	this->gender_ = Orig.gender_;
	this->allergy_ = Orig.allergy_;
	this->prescriptions_ = Orig.prescriptions_;
	this->idPatient_ += totalPatients_;
}

Patient::~Patient()
{
	// by default the patient is set to 0 scripts, but if they do have any then they were allocated and need to be deallocated
	if (numOfScripts_ > 0)
	{
		delete[] prescriptions_;
	}
	prescriptions_ = 0;
	// I am choosing not to de-increment the static number of patients variable because if I did, then the next patient created
	// would get the same ID as the last patient added before him making a duplicate ID number.
}

// accessors
bool Patient::getAllergy() const
{
	return allergy_;
}

std::string* Patient::getScripts() const
{
	return prescriptions_;
}

int Patient::getID() const
{
	return idPatient_;
}

// setters
void Patient::setAllergy(bool allergy)
{
	allergy_ = allergy;
}

void Patient::setScripts(std::string* scripts, int numScripts)
{
	prescriptions_ = scripts;
	numOfScripts_ = numScripts;
}

// other functions:
void Patient::getScripts() // gets data input directly from the user
{
	std::cout << "Enter the number of prescriptions that the patient has" << std::endl;
	std::cin >> numOfScripts_;
	prescriptions_ = new std::string[numOfScripts_];

	for (int i = 0; i < numOfScripts_; i++)
	{
		std::cout << "Enter the prescription #" << (i + 1) << std::endl;
		std::cin >> prescriptions_[i];
	}
}

void Patient::printToDisplay() // prints variables to screen
{
	std::cout << "Patient ID: # " << idPatient_ << std::endl;
	std::cout << "First name: " << fName_ << std::endl;
	std::cout << "Last name: " << lName_ << std::endl;
	std::cout << "Street Address: " << stAddress_ << std::endl;
	std::cout << "Zipcode: " << zipcode_ << std::endl;
	std::cout << "City: " << city_ << std::endl;
	std::cout << "Birth day: " << monthBirth_ << "/" << dayBirth_ << "/" << yearBirth_ << std::endl;
	std::cout << "SSN: " << SSN_ << std::endl;
	std::cout << "Gender: " << gender_ << std::endl;
	std::cout << "Allergy: ";
	if (allergy_)
	{
		std::cout << "Yes" << std::endl;
	}
	else
	{
		std::cout << "No" << std::endl;
	}
	std::cout << "Number of scripts: " << numOfScripts_ << std::endl;
	for (int i = 0; i < numOfScripts_; i++)
	{
		std::cout << "Prescription: " << (i + 1) << ":" << prescriptions_[i] << std::endl;
	}
}
