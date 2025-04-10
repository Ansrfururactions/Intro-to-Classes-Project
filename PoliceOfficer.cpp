#include "PoliceOfficer.h"

PoliceOfficer::PoliceOfficer(string name, string badgenumber, ParkedCar* car, ParkingMeter* meter): name(name), badgenumber(badgenumber), Meter(meter), Car(car)
{
    ParkedCar* inspectCar();
	ParkingMeter* checkmeter();
	compareTimes(car, meter);
}

ParkedCar PoliceOfficer::inspectCar(ParkedCar* car)
{
	car->getDetails();
	return *car;
}

ParkingMeter PoliceOfficer::checkmeter(ParkingMeter* meter)
{
	int minutesPurchased = meter->getPurchasedTime();
	cout << meter << endl;
	return *meter;
}

void PoliceOfficer::compareTimes(ParkedCar* car, ParkingMeter* meter)
{
	if (car->minutesParked > meter->purchasedTime)
	{
		ParkingTicket parkingTicket();
	}
	else
	{
		cout << "car is in compliance with the law, moving on." << endl;
	}
}

ParkingTicket::ParkingTicket(string carDetails, float fineAmount, string officerName, string officerBadge): carDetails(carDetails), fineAmount(fineAmount), officerName(officerName), officerBadge(officerBadge)
{
	
}

float ParkingTicket::CalculateFine(int overtime)
{
	return 0.0f;
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

