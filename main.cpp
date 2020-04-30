// cs142FinalProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Clinic.h"
#include <iostream>

int main()
{
  const int NUM_DOCS = 2;
  const int NUM_NURSES = 4;

  Doctor d1("Joane", "Healthy", "1714 Mullen Dr", 12345, "Baton Rouge", 10, 11,
  1975, "221-80-9871", 'M', 90000, "Pediatrist", "M.D", "Duke University", true);
  Doctor d2("Johnny", "Hefty", "1501 Lakeside Drive", 24501, "Lynchburg", 10, 12,
  1985, "220-79-9715", 'F', 90000, "Oncologist", "M.D", "John Hopkins", true);

  Nurse n1("Ashley", "Wright", "333 College St", 24501, "Lynchburg",
  4, 21, 1998, "234-80-1871", 'F', 35000, "Pediatrics", true);
  Nurse n2("Brooke", "Powers", "341 College St", 24501, "Lynchburg",
  11, 14, 1997, "245-75-9861", 'F', 35000, "Unit Care", true)
  Nurse n3("Chad", "Wheeler", "329 College St", 24501, "Lynchburg",
  5, 20, 1996, "211-45-9161", 'M', 35000, "Elder Care", true);

  Doctor* dPt1 = &d1, dPt2 = &d2;
  Nurse* nPt1 = &n1, nPt2 = &n2, nPt3 = &n3;

  Doctor** clinicDoctors = new Doctor*[NUM_DOCS]{dPt1, dPt2};
  Nurse** nurseArray = new Nurse*[NUM_NURSES]{nPt1,nPt2,nPt3};

  Clinic clinic(nurseArray, clinicDoctors, NUM_NURSES, NUM_DOCS);





















}
