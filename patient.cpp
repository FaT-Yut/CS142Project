#include "Patient.h"

// static variable
int Patient::totalPatients_ = 0;

// constructors & destructor
Patient::Patient()
{
	fName_ = "Patient";
	lName_ = "Doe";
	stAddress_ = "No address on file";
	zipcode_ = 12345;
	city_ = "City";
	dayBirth_ = 00;
	monthBirth_ = 00;
	yearBirth_ = 00;
	SSN_ = "0";
	gender_ = 'N';
	allergy_ = false;
	prescriptions_ = 0;
	numOfScripts_ = 0;
	idPatient_ += totalPatients_;
}
// parameterized constructor used when creating a brand new patient
Patient::Patient(std::string fName, std::string lName, std::string address, int zipCode, std::string city, int dayBirth,
	int monthBirth, int yearBirth, std::string SSN, char gender, bool allergy, std::string* scripts, int numOfScripts)
{
	fName_ = fName;
	lName_ = lName;
	stAddress_ = address;
	zipcode_ = zipCode;
	city_ = city;
	dayBirth_ = dayBirth;
	monthBirth_ = monthBirth;
	yearBirth_ = yearBirth;
	SSN_ = SSN;
	gender_ = gender;
	allergy_ = allergy;
	prescriptions_ = scripts;
	numOfScripts_ = numOfScripts;
	idPatient_ += totalPatients_;
}
// parameterized constructor used when reading a pre-existing Patient from a file that already has a patient ID
Patient::Patient(std::string fName, std::string lName, std::string address, int zipCode, std::string city, int dayBirth,
	int monthBirth, int yearBirth, std::string SSN, char gender, bool allergy, std::string* scripts, int numOfScripts, int id)
{
	fName_ = fName;
	lName_ = lName;
	stAddress_ = address;
	zipcode_ = zipCode;
	city_ = city;
	dayBirth_ = dayBirth;
	monthBirth_ = monthBirth;
	yearBirth_ = yearBirth;
	SSN_ = SSN;
	gender_ = gender;
	allergy_ = allergy;
	prescriptions_ = scripts;
	numOfScripts_ = numOfScripts;
	idPatient_ = id;
}

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
	std::cout << "Patient ID# " << idPatient_ << std::endl;
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
		std::cout << "Prescription " << (i + 1) << ":" << prescriptions_[i] << std::endl;
	}
}
