#ifndef date_H
#define date_H

#include <string>
using namespace std;

class date {
private:
	int month=1, day=1, year=1900;

public:
	date(int m = 1, int d = 1, int y = 1900);
		 
	
	
	bool isLeapYear();
	bool isLeapYear(int year);
	
	int lastDay();
	int lastDay(int month, int year);

	void setdate (int m, int d, int y);
	void displaydate() const;
	void displayWordDate() const;
	
	int getMonth() const { return month; };
	int getDay() const { return day; };
	int getyear() const { return year; };

};

#endif
