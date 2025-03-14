#include <iostream>
#include "Date.h"
using namespace std;

int main()
{

    int dateMonth = 1, dateDay = 1, dateYear = 1900, YN=0;


   cout << "enter 1 if you wish to run the test program. Otherwise, enter a different number." << endl;
   cin >> YN;
   if (YN == 1)
   {
       //***************************************************************//
       //                       test program                            //
       //***************************************************************//
       cout << "testing default constructor(1/1/1900): ";
       date dateInstdefault;
       cout << endl;

       cout << "testing constructor with valid date (12/25/2009): ";
       date dateInstValDate(12, 25, 2009);
       cout << endl;

       cout << "testing constructor with invalid month((14)/25/2009): ";
       date dateInstInvalMonth(14, 25, 2009);
       cout << endl;

       cout << "testing constructor with invalid day(12/(39)/2009): ";
       date dateInstInvalDay(12, 39, 2009);
       cout << endl;

       cout << "testing constructor with invalid year(12/25/(-2009)): ";
       date dateInstInvalYear(12, 25, -2009);
       cout << endl;

       cout << "testing setdate with invalid month ((14), 25, 2009): ";
       dateInstInvalMonth.setdate(14, 25, 2009);
       cout << endl;

       cout << "testing setdate with invalid day(12, (39), 2009): ";
       dateInstInvalDay.setdate(12, 39, 2009);
       cout << endl;

       cout << "testing setdate with invalid year(12, 25, (-2009)): ";
       dateInstInvalYear.setdate(12, 25, -2009);
       cout << endl;

       cout << "testing leap year Boolean when given invalid date(2/29/2009): ";
       dateInstInvalDay.setdate(2, 29, 2009);
       cout << endl;

       cout << "testing leap year Boolean when given valid date(2/29/2008): ";
       dateInstValDate.setdate(2, 29, 2008);
       cout << endl;
       //***************************************************************//
       //                    end of test program                        //
       //***************************************************************//
   }
        cout << "what is the month?" << endl;
        cin >> dateMonth;

        cout << "what is the day?" << endl;
        cin >> dateDay;

        cout << "what is the year?" << endl;
        cin >> dateYear;

        date DateEntered(dateMonth, dateDay, dateYear);
        DateEntered.displayWordDate();
}

