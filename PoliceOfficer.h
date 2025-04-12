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
};//knows values tied to the car

class ParkingMeter {
public:
	int purchasedTime;
	ParkingMeter(int purchasedTime = 40);
	int getPurchasedTime();
};//knows the purchased time

class ParkingTicket {
public:
	string CarDetails;
	float FineAmount;
	string OfficerName;
	string OfficerBadge;

	ParkingTicket(string carDetails, float fineAmount, string officerName, string officerBadge);

	float CalculateFine(int overtime);
};//allows for the creation of a parking ticet object

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
	void issueTicket(ParkedCar* car, ParkingMeter* meter, ParkingTicket* Ticket);

	~PoliceOfficer();
};// inspects the car, checks the meter, and if the minutes parked exceed the minutes purchased, it dynamically creates a parking ticket object to print its data.

