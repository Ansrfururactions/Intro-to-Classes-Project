#include "NumberArray.h"
#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

NumberArray::NumberArray(int size)
{
	NumberArray :: NumberArr = new double[size];

	for(int i=0; i<size; i++)
	{
		NumberArr[i] = 0.0;
		cout << NumberArr[i] << setprecision(1) << " ";
	}
	cout << endl;
}

void NumberArray::setArray(int index, double value)
{	
	cout << "please provide the index to store a value in: " << endl;
	cin >> index;
	random_device generator;
	uniform_real_distribution<double> ValGen(0.0, 20.0);

	if (index > MAX_SIZE)
	{
		cout << "Value is outside of array bounds, Storage failed" << endl;
    }
	else
	{
		cout << "E" << endl;
	}
}

int NumberArray::getNumber(int index)
{
	cout << "please enter the number you wish to have access to:" << endl;

	return ;
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
