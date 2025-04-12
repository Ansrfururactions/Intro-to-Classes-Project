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

	cout<< "minutes parked: " <<  car->minutesParked << endl;
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
		
    	string carDetails = "vehicle license number: " + car->licenseNumber + ", make: " + car->make + ", model: " + car->model + ", color: " + car->color;
		float fineAmount;
		ParkingTicket* Ticket = new ParkingTicket(carDetails, fineAmount = 25.0f, Name, badgenumber);
		issueTicket(car, meter, Ticket);
	}
	else
	{
		cout << "car is in compliance with the law, moving on." << endl << endl;
	}
}

void PoliceOfficer::issueTicket(ParkedCar* car, ParkingMeter* meter, ParkingTicket* Ticket)
{
	int overtime = car->minutesParked - meter->purchasedTime;
	Ticket->FineAmount += Ticket->CalculateFine(overtime);
	cout << "***Parking Ticket***" << endl;
	cout << "officer " << Name << ", badge number " << badgenumber << endl;
	cout << Ticket->CarDetails << endl;
	cout << "fine: $" << Ticket->FineAmount << endl << endl;
	delete Ticket;

}


ParkingTicket::ParkingTicket(string carDetails, float fineAmount, string officerName, string officerBadge): CarDetails(carDetails), FineAmount(fineAmount), OfficerName(officerName), OfficerBadge(officerBadge)
{
}

float ParkingTicket::CalculateFine(int overtime)
{
	float fine = 0.0f;
	overtime -= 60;
	while (overtime > 0)
	{
		overtime -= 60;
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