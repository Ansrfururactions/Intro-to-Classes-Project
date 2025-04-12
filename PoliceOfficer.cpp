#include "PoliceOfficer.h"

PoliceOfficer::PoliceOfficer(string name, string badgenumber, ParkedCar* car, ParkingMeter* meter): Name(name), badgenumber(badgenumber), Meter(meter), Car(car)
{
    inspectCar(car);
    checkmeter(meter);
	compareTimes(car, meter);
}

ParkedCar PoliceOfficer::inspectCar(ParkedCar* car)
{

	car->getDetails();

	cout << "make: " << car->make << ", model: " << car->model << ", color: " << car->color << ", license number: " << car->licenseNumber << ", minutes parked: " <<  car->minutesParked << endl;
	return *car;
}

ParkingMeter PoliceOfficer::checkmeter(ParkingMeter* meter)
{
	meter->getPurchasedTime();
	cout << "Time Purchased: " << meter->purchasedTime << endl;
	return *meter;
}

void PoliceOfficer::compareTimes(ParkedCar* car, ParkingMeter* meter)
{
	if (car->minutesParked > meter->purchasedTime)
	{
		string placeholder = "N/A";
		float placeholder2 = 0.0f;
	    string placeholder3 = "N/A";
	    string placeholder4 = "AAA000";

		string carDetails = "vehicle license number: " + car->licenseNumber + ", make: " + car->make + ", model: " + car->model + ", color: " + car->color;
		int overtime = car->minutesParked - meter->purchasedTime;
		float fineAmount;
		ParkingTicket DummyTicket(placeholder, placeholder2, placeholder3, placeholder4);
		fineAmount = DummyTicket.CalculateFine(overtime);
		ParkingTicket Ticket(carDetails, fineAmount, Name, badgenumber);

	}
	else
	{
		cout << "car is in compliance with the law, moving on." << endl;
	}
}


ParkingTicket::ParkingTicket(string carDetails, float fineAmount, string officerName, string officerBadge): CarDetails(carDetails), FineAmount(fineAmount), OfficerName(officerName), OfficerBadge(officerBadge)
{
	if (carDetails == "N/A" && fineAmount == 0.0f && officerName == "N/A" && officerBadge == "AAA000")
	{
		cout <<"";
	}
	else
	{
		cout << "***Parking Ticket***" << endl;
		cout << "officer " << officerName << ", badge number " << officerBadge << endl;
		cout << carDetails << endl;
	}
}

float ParkingTicket::CalculateFine(int overtime)
{
	float fine = 25.0f;
	while (overtime > 0)
	{
		overtime - 60;
		fine += 10.00f;
		
	}
	return fine;
}

ParkedCar::ParkedCar(string make, string model, string color, string licenseNumber, int minutesParked): make(make), model(model), color(color), licenseNumber(licenseNumber), minutesParked(minutesParked)
{

}

ParkedCar ParkedCar::getDetails()
{
	return ParkedCar(make, model, color, licenseNumber, minutesParked);
}

ParkingMeter::ParkingMeter(int purchasedTime): purchasedTime(purchasedTime)
{
}

int ParkingMeter::getPurchasedTime()
{
	
	return purchasedTime;
}

PoliceOfficer::~PoliceOfficer()
{
	delete Car;
	delete Meter;
}