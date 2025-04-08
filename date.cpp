#include <iostream>
#include "Date.h"
using namespace std;

date::date(int m, int d, int y) : month(m), day(d), year(y)
{
};

    

bool date::isLeapYear(int year)
{
    if (year % 400 == 0) {
        return true;
    }
    else if (year % 100 == 0) {
        return false;
    }
    else if (year % 4 == 0) {
        return true;
    }
    else {
        return false;
    }
}

    

    bool date::isLeapYear()
    {
        if (year % 400 == 0) {
            return true;
        }
        else if (year % 100 == 0) {
            return false;
        }
        else if (year % 4 == 0) {
            return true;
        }
        else {
            return false;
        }
    }

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
            if (isLeapYear())
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
            if (isLeapYear(year))
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
        if (m <= 0 || m > 12)
        {
            cout << "invalid month, setting date to default" << endl;
            month = 1;
            day = 1;
            year = 1900;
        }
        else if (y <= 0)
        {
        
            cout << "invalid year, setting date to default" << endl;
            month = 1;
            day = 1;
            year = 1900;
        }
        else if (d <= 0 || d >= lastDay(m,y) || d >= lastDay())
        {
            cout << "invalid day, setting date to default" << endl;
            month = 1;
            day = 1;
            year = 1900;
        }
        else
        {
            month = m;
            day = d;
            year = y;
            displayWordDate2();
        }

    }

    void date::displaydate() const
    {
        cout << month << "/" << day << "/" << year << endl;
    }

    void date::displayWordDate1() const
    {
        string wordMonth;

        if (month == 1)
        {
            wordMonth = "January";
        }
        else if (month == 2)
        {
             wordMonth = "February";
        }
        else if (month == 3)
        {
             wordMonth = "March";
        } 
        else if (month == 4)
        {
             wordMonth = "April";
        }
        else if (month == 5)
        {
             wordMonth = "May";
        }
        else if (month == 6)
        {
             wordMonth = "June";
        }
        else if (month == 7)
        {
             wordMonth = "July";
        }
        else if (month == 8)
        {
             wordMonth = "August";
        }
        else if (month == 9)
        {
             wordMonth = "September";
        }
        else if (month == 10)
        {
             wordMonth = "October";
        }
        else if (month == 11)
        {
             wordMonth = "November";
        }
        else
        {
            string wordMonth = "December";
        }

        cout << wordMonth << " " << day << ", " << year << endl;
    }
    void date::displayWordDate2() const
    {
        string wordMonth;

        if (month == 1)
        {
            wordMonth = "January";
        }
        else if (month == 2)
        {
            wordMonth = "February";
        }
        else if (month == 3)
        {
            wordMonth = "March";
        }
        else if (month == 4)
        {
            wordMonth = "April";
        }
        else if (month == 5)
        {
            wordMonth = "May";
        }
        else if (month == 6)
        {
            wordMonth = "June";
        }
        else if (month == 7)
        {
            wordMonth = "July";
        }
        else if (month == 8)
        {
            wordMonth = "August";
        }
        else if (month == 9)
        {
            wordMonth = "September";
        }
        else if (month == 10)
        {
            wordMonth = "October";
        }
        else if (month == 11)
        {
            wordMonth = "November";
        }
        else
        {
            string wordMonth = "December";
        }
        cout << day << " " << wordMonth << ", " << year << endl;
    }

    string date::getWordMonth()
    {
        string wordMonth;

        if (month == 1)
        {
            wordMonth = "January";
        }
        else if (month == 2)
        {
            wordMonth = "February";
        }
        else if (month == 3)
        {
            wordMonth = "March";
        }
        else if (month == 4)
        {
            wordMonth = "April";
        }
        else if (month == 5)
        {
            wordMonth = "May";
        }
        else if (month == 6)
        {
            wordMonth = "June";
        }
        else if (month == 7)
        {
            wordMonth = "July";
        }
        else if (month == 8)
        {
            wordMonth = "August";
        }
        else if (month == 9)
        {
            wordMonth = "September";
        }
        else if (month == 10)
        {
            wordMonth = "October";
        }
        else if (month == 11)
        {
            wordMonth = "November";
        }
        else
        {
            string wordMonth = "December";
        }
        return wordMonth;
    }

    date& date::operator++() {      
        ++day;
        if (day > lastDay())
        {
            day = 1;
            ++month;
            if (month > 12)
            {
                month = 1;
                ++year;
            }
        }
        return *this;
    }

    date& date::operator--() {
        --day;
        if (day < 1)
        {
            --month;
            day = lastDay();
            if (month < 1)
            {
                month = 12;
                --year;
            }
        }
        return *this;
    }

    date date::operator++(int)
    {
        date dy = *this;
        day++;
        if (day > lastDay(month, year))
        {
            day = 1;
            month++;
            if (month > 12)
            {
                month = 1;
                year++;
            }
        }
        return dy;
    }

    date date::operator--(int)
    {
        date dy = *this;
        day--;
        if (day < 1)
        {
            month--;
            day = lastDay();
            if (month < 1)
            {
                month = 12;
                year--;
            }
        }
        return dy;
    }

    date operator-(const date& lhs, const date& rhs)
    {   
        date differenceobj = lhs;
        cout <<"  differenceobj.month: " << differenceobj.month << ", differenceobj.day: " << differenceobj.day << ", differenceobj.year: " << differenceobj.year << endl;
        cout << " rhs.month: " << rhs.month << ", rhs.day: " << rhs.day << ", rhs.year: " << rhs.year << endl;
        int difference = 1;

      while (differenceobj.month != rhs.month || differenceobj.day != rhs.day || differenceobj.year != rhs.year)
      {
           --differenceobj; 
           difference= difference + 1;
       }

                 return differenceobj;
    }
     

    ostream& operator<<(ostream& out, const date& d)
    {
        out << d.getMonth() << d.day << d.year << endl;
        return out;
    }

    istream& operator>>(istream& in, date& d)
    {
        cout << "Enter month: ";
        in >> ws;
        in >> d.month;

        cout << "enter day: ";
        in >> ws;
        in >> d.day;

        cout << "enter year: ";
        in >> ws;
        in >> d.year;

        return in;
    }
