#include <iostream>
#include "Date.h"
using namespace std;

int main()
{

    int dateMonth = 1, dateDay = 1, dateYear = 1900, YN=0;
    date dateInstdefault;
    date dateInstParam(12, 25, 2009);
    date dateInstParam2(4, 10, 2014);
    date dateInstParam3(4, 18, 2014);
    date diff1 = dateInstParam3 - dateInstParam2;
    date dateInstParam4(2, 2, 2006);
    date dateInstParam5(11, 10, 2003);
    date diff2 = dateInstParam4 - dateInstParam5;
    date dateInstParam6(2, 29, 2008);
       //***************************************************************//
       //                       test program                            //
       //***************************************************************//
       cout << "testing default constructor: ";
       dateInstdefault.displaydate();
       cout << endl;

       cout << "testing constructor with parameters (12/25/2009): ";
       dateInstParam.displayWordDate1();
       cout << endl;

       cout << "testing setdate: ";
       dateInstdefault.setdate(1, 1, 1900);
       cout << endl;

       cout << "testing setdate with parameters (13/45/2018) : ";
       dateInstParam.setdate(13, 45, 2018);
       cout << endl;

       cout << "testing setdate with parameters (4/31/2000) : ";
       dateInstParam.setdate(4, 31, 2000);
       cout << endl;
       
       cout << "testing setdate with parameters (2/29/2009) : ";
       dateInstParam.setdate(2, 29, 2009);
       cout << endl;

       cout << "testing overloaded - operator: ";
       cout << diff1 << endl;
       cout << diff2 << endl;
       cout << endl;

       cout << "testing overloaded --prefix operator: ";
       cout << "before operator: " << dateInstParam6 << endl;
       --dateInstParam6;
       cout << "after operator: " << dateInstParam6 << endl;

       //***************************************************************//
       //                    end of test program                        //
       //***************************************************************//
        cout << "what is the month?" << endl;
        cin >> dateMonth;

        cout << "what is the day?" << endl;
        cin >> dateDay;

        cout << "what is the year?" << endl;
        cin >> dateYear;

        date DateEntered(dateMonth, dateDay, dateYear);
        DateEntered.displayWordDate1();
}

