#pragma once
#include <iostream>
#include <string>
using namespace std;

class ParkedCar {
public:
	string make;
	string model;
	string color;
	string licenseNumber;
	int minutesParked;
	ParkedCar(string make = "Toyota", string model = "Camry", string color = "red", string licenseNumber = "XYZ123", int minutesParked = 30);
	ParkedCar getDetails();
};

class ParkingMeter {
public:
	int purchasedTime;
	ParkingMeter(int purchasedTime = 40);
	int getPurchasedTime();
};

class ParkingTicket {
public:
	string CarDetails = "N/A";
	float FineAmount = 0.0f;
	string OfficerName= "N/A";
	string OfficerBadge= "AAA000";

	ParkingTicket(string carDetails, float fineAmount, string officerName, string officerBadge);

	float CalculateFine(int overtime);
};

class PoliceOfficer {
private:
	ParkedCar* Car;
	ParkingMeter* Meter;
public: 
	string Name;
	string badgenumber;

	PoliceOfficer(string name, string badgenumber, ParkedCar* car, ParkingMeter* meter);

	ParkedCar inspectCar(ParkedCar* car);
	ParkingMeter checkmeter(ParkingMeter* meter);
	void compareTimes(ParkedCar* car, ParkingMeter* meter);

	~PoliceOfficer();
};

