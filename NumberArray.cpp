#include "NumberArray.h"
#include <iostream>
#include <random>
using namespace std;

NumberArray::NumberArray(int size)
{
	random_device generator;
    uniform_int_distribution<double> ValGen(0.0, 20.0);
}

void NumberArray::setArray(int index, double value)
{
	double numberArray{index};


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
