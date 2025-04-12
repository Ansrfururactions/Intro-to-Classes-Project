#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    date dateInstdefault;
    date dateInstParam(12, 25, 2009);
    date dateInstParam2(4, 10, 2014);
    date dateInstParam3(4, 18, 2014);
    date diff1 = dateInstParam2 - dateInstParam3;

    date dateInstParam4(2, 2, 2006);
    date dateInstParam5(11, 10, 2003);
    date diff2 = dateInstParam4 - dateInstParam5;

    date dateInstParam6(2, 29, 2008);
    date dateInstParam7(12, 31, 2024);
    //***************************************************************//
    //                       test program                            //
    //***************************************************************//
    cout << "testing default constructor: ";
    dateInstdefault.displaydate();
    cout << endl;

    cout << "testing second date format (12/25/2009): ";
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

    cout << "testing overloaded - operator: "<< endl;
    
    cout << "days between (4, 10, 2014) & (4, 18, 2014): " << diff1.getyear() << endl;

    cout << "days between (10, 11, 2003) & (2, 2, 2008): " << diff2.getyear() << endl;
    cout << endl;

    cout << "testing month incrementation: " << endl;

    cout << "testing overloaded --prefix operator: ";
    cout << "before operator: ";
    dateInstParam6.displaydate();
    cout << endl;
    --dateInstParam6;
    cout << "after operator: ";
    dateInstParam6.displaydate();
    cout << endl;
    cout << endl;

    cout << "testing overloaded ++prefix operator: ";
    cout << "before operator: ";
    dateInstParam6.displaydate();
    cout << endl;
    ++dateInstParam6;
    cout << "after operator: ";
    dateInstParam6.displaydate();
    cout << endl;
    cout << endl;

    cout << "testing overloaded postfix-- operator: ";
    cout << "before operator: ";
    dateInstParam6.displaydate();
    cout << endl;
    dateInstParam6--;
    cout << "after operator: ";
    dateInstParam6.displaydate();
    cout << endl;
    cout << endl;

    cout << "testing overloaded postfix++ operator: ";
    cout << "before operator: ";
    dateInstParam6.displaydate();
    cout << endl;
    dateInstParam6++;
    cout << "after operator: ";
    dateInstParam6.displaydate();
    cout << endl;
    cout << endl;

    cout << "testing year incrementation: " << endl;

    cout << "testing overloaded postfix-- operator: ";
    cout << "before operator: ";
    dateInstParam7.displaydate();
    cout << endl;
    dateInstParam7--;
    cout << "after operator: ";
    dateInstParam7.displaydate();
    cout << endl;
    cout << endl;

    cout << "testing overloaded postfix++ operator: ";
    cout << "before operator: ";
    dateInstParam7.displaydate();
    cout << endl;
    dateInstParam7++;
    cout << "after operator: ";
    dateInstParam7.displaydate();
    cout << endl;
    cout << endl;

    cout << "testing overloaded --prefix operator: ";
    cout << "before operator: ";
    dateInstParam7.displaydate();
    cout << endl;
    --dateInstParam7;
    cout << "after operator: ";
    dateInstParam7.displaydate();
    cout << endl;
    cout << endl;

    cout << "testing overloaded ++prefix operator: ";
    cout << "before operator: ";
    dateInstParam7.displaydate();
    cout << endl;
    ++dateInstParam7;
    cout << "after operator: ";
    dateInstParam7.displaydate();
    cout << endl;
    cout << endl;

    date enterabledate;
    cout << "testing overloaded >> & << operator: " << endl;
    cin >> enterabledate;
    cout << enterabledate << endl;

    //***************************************************************//
    //                    end of test program                        //
    //***************************************************************//
}