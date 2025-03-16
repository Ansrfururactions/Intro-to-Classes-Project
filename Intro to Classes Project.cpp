#include "NumberArray.h"
#include <iostream>
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


for (index; index < perameter; index++)
{
	double value = ValGen(generator);

	PeramArray.setArray(index, value);
}



NumberArray PrintArray();
}


