// cs142FinalProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Clinic.h"
#include <iostream>

int main()
{
  std::string fName = "Joane";
  std::string lName = "Healthy";
  std::string stAdress = "1714 Mullen Dr";
  int zip = 70810;
  std::string city = "Baton Rouge";
  int dayBirth = 10;
  int monthBirth = 11;
  int yearBirth = 1975;
  std::string ssn = "677673454";
  char gender = 'M';
  double salary = 110000;
  std::string specialty = "Pediatrist";
  std::string degree = "M.D";
  std::string medSchool = "Duke University";
  bool certified = true;

  Doctor d1(fName, lName, stAdress, zip, city, dayBirth, monthBirth,
  yearBirth, ssn, gender, salary, specialty, degree, medSchool, certified);

  fName = "Johnny";
  lName = "Hefty";
  stAdress = "1501 Lakeside Drive";
  zip = 24551;
  city = "Lynchburg";
  dayBirth = 10;
  monthBirth = 12;
  yearBirth = 1985;
  ssn = "665543454";
  gender = 'F';
  salary = 110009;
  specialty = "Oncologist";
  degree = "M.D";
  medSchool = "John Hopkins";
  certified = true;

  Doctor d2(fName, lName, stAdress, zip, city, dayBirth, monthBirth,
  yearBirth, ssn, gender, salary, specialty, degree, medSchool, certified);
  const int NUM_DOCS = 2;
  Doctor* ptr1 = &d1;
  Doctor* ptr2 = &d2;
  Doctor** clinicDoctors = new Doctor*[NUM_DOCS]{ptr1, ptr2};


  Nurse jR("Jakie", "Robinson", "123 NoOneCares Blvd", 1234, "BoomTown",
  4, 21, 1998, "345674321", 'F', 35000, "Oncology Nurse", true );
  Nurse hA("Hugh", "Anus", "Your Momma's Box", 69696, "Dad's Balls",
  4, 21, 1998, "5346767", 'F', 35000, "Throat Specialist", true );
  Nurse iW("Icy", "Weigner", "The Strip Clubs cum collection bin", 4312, "Pen Island",
  5, 20, 1978, "5413456", 'M', 35000, "Anal Professional", true );
  Nurse jH("Jackme", "Hough", "Right hand is better than left St", 1234, "Scrotem",
  8, 5, 1995, "8761345", 'M', 35000, "Testicular Cancer", true );

  const int NUM_NURSES = 4;
  Nurse* nPtr1 = &jR;
  Nurse* nPtr2 = &hA;
  Nurse* nPtr3 = &iW;
  Nurse* nPtr4 = &jH;

  Nurse** nurseArray = new Nurse*[NUM_NURSES]{nPtr1,nPtr2,nPtr3,nPtr4};

  Clinic clinic(nurseArray, clinicDoctors, NUM_NURSES);
  




















}
