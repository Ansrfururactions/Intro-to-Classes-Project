#include "NumberArray.h"
#include <iostream>
#include <random>
using namespace std;

NumberArray::NumberArray(int size = MAX_SIZE)
{
	double NumberArray[size];
	double* ArrayStorage = NumberArray;
	
	for(int i=0; i<size; i++)
	{
		NumberArray[i] = 0.0;
	}
	random_device generator;
    uniform_int_distribution<double> ValGen(0.0, 20.0);
}

void NumberArray::setArray(int index, double value)
{
	if (index > MAX_SIZE)
	{
		cout << "Value is outside of esta";
  }
}

int NumberArray::getNumber(int index)
{
	cout << "please enter the number you wish to have access to:" << endl;
}

int NumberArray::LowestValue()
{
	return 0;
}

int NumberArray::HighestValue()
{
	return 0;
}

int NumberArray::calcAverage()
{
	return 0;
}

NumberArray::~NumberArray()
{
	cout << "destructor is running" << endl;

}
