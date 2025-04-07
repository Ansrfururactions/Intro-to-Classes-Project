#ifndef date_H
#define date_H

#include <iostream>
#include <string>
using namespace std;

class date {
private:
	int month, day, year;

public:
	date(int m = 1, int d = 1, int y = 1900);//constructor
		 

	date& operator++();
	
	date& operator--();

	date operator++(int);

	date operator--(int);

	date operator-(const date&) const;
	
	friend ostream& operator<<(ostream&, const date&);

	friend istream& operator>>(istream&, date&);

	bool isLeapYear();//uses the state of year in the constructor and determines if it is a leap year
	bool isLeapYear(int year);// takes year as a parameter and determines if it is a leap year
	
	int lastDay();// uses the state of month & year in the constructor and runs if statements to determine the last day of the month, using the isLeapYear Bool if month = 2;
	int lastDay(int month, int year);// takes month & year as a parameter and runs if statements to determine the last day of the month, using the isLeapYear Bool if month = 2;

	void setdate (int m, int d, int y);//checks values provided by the client for validation
	
	void displaydate() const;//displays the values returned.
	void displayWordDate1() const;//prints out the date with the month being changed to its name
	void displayWordDate2() const;

	string getWordMonth();
	int getMonth() const { return month; };//accessor for month
	int getDay() const { return day; };//accessor for day
	int getyear() const { return year; };//accessor for year

};

#endif
