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

    string Name2 = "Jame Smith";
    string badge2 = "1234";
    ParkedCar* car2 = new ParkedCar("Honda", "Accord", "Blue", "ABC987", 70);
    ParkingMeter* Meter2 = new ParkingMeter(60);
    PoliceOfficer Officer2(Name2, badge2, car2, Meter2);
}


