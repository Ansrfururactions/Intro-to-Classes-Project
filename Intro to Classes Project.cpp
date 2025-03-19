#include "NumberArray.h"
#include <iostream>
#include <iomanip>
#include <random>
using namespace std;
random_device generator;
uniform_real_distribution<double> ValGen(0.0, 20.0);

int main()
{
	
	int Parameter = 15;
	double lowVal = 0.0;
	double highVal = 0.0;
	double Ave = 0.0;
NumberArray DefaultArray;
NumberArray ParamArray(Parameter);

int index = 0;

cout << endl << "mutator test: " << endl;
for (index; index < Parameter; index++)
{
	double value = ValGen(generator);

	ParamArray.setArray(index, value);
}
cout << endl<< endl;

cout << "Accessor with valid index(12):" << endl;
cout << ParamArray.getNumber(12) << endl << endl;
cout << "Accessor with invalid index(18):" << endl;
cout << ParamArray.getNumber(18) << endl << endl;
cout << "Accessor with index below zero(-1):" << endl;
cout << ParamArray.getNumber(-1) << endl << endl;

lowVal= ParamArray.LowestValue();
highVal = ParamArray.HighestValue();
Ave = ParamArray.calcAverage();

cout << "lowest value: " << lowVal << endl;
cout << "highest value: " << highVal << endl;
cout << "average: " << Ave << endl;

   ParamArray.PrintArray();
}


