#include "PoliceOfficer.h"

PoliceOfficer::PoliceOfficer(string name, string badgenumber): name(name), badgenumber(badgenumber)
{

}

ParkingTicket PoliceOfficer::inspectCar(ParkedCar* parkedCar, ParkingMeter* parkingMeter)
{
	return ParkingTicket();
}

ParkingTicket::ParkingTicket(string carDetails, float fineAmount, string officerName, string officerBadge): carDetails(carDetails), fineAmount(fineAmount), officerName(officerName), officerBadge(officerBadge)
{

}

ParkedCar::ParkedCar(string make, string model, string color, string licsenceNumber, int minutesParked): make(make), model(model), color(color), licsenceNumber(licsenceNumber), minutesParked(minutesParked)
{

}

string ParkedCar::getDetails()
{
	return string();
}

ParkingMeter::ParkingMeter(int purchasedTime): purchasedTime(purchasedTime)
{

}

int ParkingMeter::getPurchasedTime()
{
	return 0;
}

string ParkingTicket::getDetails()
{
	return string();
}
