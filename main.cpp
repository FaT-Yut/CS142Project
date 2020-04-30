// cs142FinalProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Clinic.h"
#include <iostream>


    int validateInput(int input, int max, int min);

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
            11, 14, 1997, "245-75-9861", 'F', 35000, "Unit Care", true);
        Nurse n3("Chad", "Wheeler", "329 College St", 24501, "Lynchburg",
            5, 20, 1996, "211-45-9161", 'M', 35000, "Elder Care", true);

        Doctor* dPt1 = &d1;
        Doctor* dPt2 = &d2;
        Nurse* nPt1 = &n1;
        Nurse* nPt2 = &n2;
        Nurse* nPt3 = &n3;

        Doctor** clinicDoctors = new Doctor * [NUM_DOCS] {dPt1, dPt2};
        Nurse** nurseArray = new Nurse * [NUM_NURSES] {nPt1, nPt2, nPt3};

        Clinic clinic(nurseArray, clinicDoctors, NUM_NURSES, NUM_DOCS);














        //
        //  int selection = 0;
        //  Accounting myAcc01;
        //  std::cout << std::endl;
        //  while (selection != 8)
        //  {
        //      myAcc01.display();
        //      std::cout << "What would you like to do?\n1.Create a new clinic\n2.Load existing data\n" <<
        //          "3.Save data\n4.Add an Appointment\n5.Add a new patient\n6.Add a new Nurse\n7.Show all Current appointments\n8.Exit" << std::endl;
        //
        //      selection = validateInput(selection, 8, 1);
        //      int id = 0, days = 0;
        //      switch (selection)
        //      {
        //      case 1:
        //
        //          break;
        //      case 2:
        //
        //          break;
        //      case 3:
        //          std::cout << "What type of vehicle is it?" << std::endl;
        //          std::cout << "1. Sedan\n2. SUV\n3. Light Truck\n4. Medium Truck\n5. Heavy Truck" << std::endl;
        //          do
        //          {
        //              int newCar;
        //              std::cin >> newCar;
        //              switch (newCar)
        //              {
        //              case 1:
        //                  myAcc01.addNewCar(new Sedan);
        //                  break;
        //              case 2:
        //                  myAcc01.addNewCar(new SUV);
        //                  break;
        //              case 3:
        //                  myAcc01.addNewCar(new LightTruck);
        //                  break;
        //              case 4:
        //                  myAcc01.addNewCar(new MediumTruck);
        //                  break;
        //              case 5:
        //                  myAcc01.addNewCar(new HeavyTruck);
        //                  break;
        //              default:
        //                  std::cout << "Must enter 1 - 5\nTry again." << std::endl;
        //                  break;
        //              }
        //          } while (selection < 1 || selection > 8);
        //          break;
        //      case 4:
        //          std::cout << "Enter vehicle ID: " << std::endl;
        //          id = validateInput(id, myAcc01.getNumVeh(), 1);
        //          myAcc01.sellCar(id);
        //          std::cout << "The vehicle has been removed." << std::endl;
        //          break;
        //      case 5:
        //          std::cout << "The net proffit from all of the currently rented out vehicles without including tax is:" << std::endl;
        //          std::cout << myAcc01.getTotalRents() << std::endl;
        //          break;
        //      case 6:
        //          std::cout << "Goodbye!\nHave a nice day" << std::endl;
        //          break;
        //      }
        //
        //  }
        //}
        //
        //
        //int validateInput(int input, int max, int min)
        //{
        //  do
        //  {
        //      std::cin >> input;
        //      if (input < min || input > max)
        //      {
        //          std::cout << "Invalid input" << std::endl << "Input must be from " <<
        //          min << " to " << max << "." << std::endl;
        //      }
        //  } while (input < min || input > max);
        //
        //  return input;
        //}
        //




















    }
