#pragma once
#include <iostream>
#include <string>
using namespace std;

class ParkedCar {
public:
	string make;
	string model;
	string color;
	string licsenceNumber;
	int minutesParked;

};

class ParkingMeter {
public:
	int purchasedTime;
};

class ParkingTicket {
public:
	string carDetails;
	float fineAmount;
	string officerName;
	string officerBadge;
};

class PoliceOfficer {

public: 
	string name;
	string badgenumber;

	PoliceOfficer(string n, string b);
};

