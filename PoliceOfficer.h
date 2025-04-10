#pragma once
#include <iostream>
#include <string>
using namespace std;

class ParkedCar {
public:
	string make = "Toyota";
	string model = "Camry";
	string color = "red";
	string licenseNumber = "XYZ123";
	int minutesParked = 30;
	ParkedCar(string make, string model, string color, string licenseNumber, int minutesParked);
	ParkedCar getDetails();
};

class ParkingMeter {
public:
	int purchasedTime = 40;
	ParkingMeter(int purchasedTime);
	int getPurchasedTime();
};

class ParkingTicket {
public:
	string carDetails;
	float fineAmount;
	string officerName;
	string officerBadge;

	ParkingTicket(string carDetails, float fineAmount, string officerName, string officerBadge);

	float CalculateFine(int overtime);
};

class PoliceOfficer {
private:
	ParkedCar* Car;
	ParkingMeter* Meter;
public: 
	string name = "Jane Smith";
	string badgenumber = "1234";

	PoliceOfficer(string name, string badgenumber, ParkedCar* car, ParkingMeter* meter);

	ParkedCar inspectCar(ParkedCar* car);
	ParkingMeter checkmeter(ParkingMeter* meter);
	void compareTimes(ParkedCar* car, ParkingMeter* meter);
};

