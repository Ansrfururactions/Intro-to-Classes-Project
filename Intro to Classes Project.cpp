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

   ParamArray.PrintArray();
}


