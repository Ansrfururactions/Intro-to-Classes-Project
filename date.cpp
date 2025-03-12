#include <iostream>
#include "Date.h"

date::date(int m, int d, int y) : month(m), day(d), year(y) {}


    bool date::isLeapYear(int year)
    {
        if (year % 4 == 0)
            return true;
        else
            return false;
    }
    bool date::isLeapYear()
    {
        if (year % 4 == 0)
            return true;
        else
            return false;
    };

    int date::lastDay()
    {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            return 31;
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            return 30;
        }

        else
        {
            if (isLeapYear(year) || isLeapYear())
            {
                return 29;
            }
            else
            {
                return 28;
            }
        }
    }

    int date::lastDay(int month, int year)
    {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            return 31;
        } 
        else if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            return 30;
        }

        else
        {
            if (isLeapYear(year)||isLeapYear())
            {
                return 29;
            } 
            else
            {
                return 28;
            }
        }
    }

	void date::setdate(int m, int d, int y)
    {
        if (m <= 0 && m > 12)
        {
            cout << "invalid month, setting default month";
        }
        else
        {
            month = m;
        }

        if (y <= 0)
        {
            cout << "invalid year, setting default year";
        }
        else
        {
            year = y;
        }

        if (d <= 0 || d > lastDay(month, year))
        {
            cout << "invalid day, setting default day";
        }
        else
        {
            day = d;
        }
    }

    void date::displaydate()
    {

    }