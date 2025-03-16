#include "NumberArray.h"
#include <iostream>
#include <iomanip>
#include <random>
using namespace std;
random_device generator;
uniform_real_distribution<double> ValGen(0.0, 20.0);

int main()
{
	
	int perameter = 15;
NumberArray DefaultArray;
NumberArray PeramArray(perameter);

int index = 0;

cout << endl << "mutator test: " << endl;
for (index; index < perameter; index++)
{
	double value = ValGen(generator);

	PeramArray.setArray(index, value);
}
cout << endl<< endl;

cout << "Accessor with valid index(12):" << endl;
cout << PeramArray.getNumber(12) << endl << endl;
cout << "Accessor with invalid index(18):" << endl;
cout << PeramArray.getNumber(18) << endl << endl;

   PeramArray.PrintArray();
}


