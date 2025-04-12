#include "PoliceOfficer.h"
#include <iostream>
using namespace std;

int main()
{
    string Name1 = "John Doe";
    string badge1 = "XYZ123";
    ParkedCar* car1 = new ParkedCar;
    ParkingMeter* Meter1 = new ParkingMeter;
    PoliceOfficer Officer1(Name1, badge1, car1, Meter1);

    string Name2 = "Jane Smith";
    string badge2 = "1234";
    ParkedCar* car2 = new ParkedCar("Honda", "Accord", "Blue", "ABC987", 70);
    ParkingMeter* Meter2 = new ParkingMeter(60);
    PoliceOfficer Officer2(Name2, badge2, car2, Meter2);

    string Name3 = "James Brown";
    string badge3 = "4321";
    ParkedCar* car3 = new ParkedCar("Ford", "Mustang", "Black", "LMN456", 190);
    ParkingMeter* Meter3 = new ParkingMeter(60);
    PoliceOfficer Officer3(Name3, badge3, car3, Meter3);

    ParkedCar* car4 = new ParkedCar("Honda", "Civic", "Blue", "OMO987", 70);
    ParkingMeter* Meter4 = new ParkingMeter(120);
   
    ParkedCar* car5 = new ParkedCar("Nissan", "Rogue", "Red", "CFF447", 100);
    ParkingMeter* Meter5 = new ParkingMeter(70);
   
    ParkedCar* car6 = new ParkedCar("Honda", "Accord", "Blue", "ABC987", 240);
    ParkingMeter* Meter6 = new ParkingMeter(60);
    string Name4 = "Chief Micheal";
    string badge4 = "3141";
    PoliceOfficer Officer4(Name4, badge4, car4, Meter4);
                  Officer4.compareTimes(car5, Meter5);
                  Officer4.compareTimes(car6, Meter6);
}


