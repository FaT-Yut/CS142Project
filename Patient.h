#pragma once
#include "Person.h"
#include "Doctor.h"

#include <string>
#include <iostream>

// derived class of Person
class Patient : public Person
{
public:
	// constructors & destructor:
	Patient();
	// parameterized constructor used when creating a brand new patient
	Patient(std::string, std::string, std::string, int, std::string, int, int, int, std::string, char, bool, std::string*, int);
	// parameterized constructor used when reading a pre-existing Patient from a file that already has a patient ID
	Patient(std::string, std::string, std::string, int, std::string, int, int, int, std::string, char, bool, std::string*, int, int);
	Patient(const Patient&);
	~Patient();

	// accessors:
	bool getAllergy() const;
	std::string* getScripts() const;
	int getID() const;

	// setters:
	void setAllergy(bool);
	void setScripts(std::string*, int);

	// other functions:
	void getScripts(); // gets data input directly from the user
	void printToDisplay(); // prints variables to screen

private:
	bool allergy_;
	std::string* prescriptions_;
	int numOfScripts_;
	int idPatient_;
	// static variable
	static int totalPatients_;
};
