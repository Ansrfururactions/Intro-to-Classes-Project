#include "NumberArray.h"
#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

NumberArray::NumberArray(int size) : size(size)
	{ 
	NumberArray :: NumberArr = new double[size];

	for(int i=0; i<size; i++)
	{
		NumberArr[i] = 0.0; 
		cout << setprecision(2) << NumberArr[i] << " ";
	}

	cout << endl;
}

void NumberArray::setArray(int index, double value)
{	
	
	if (index > size)
	{
		
		cout << "Value is outside of array bounds, Storage failed" << endl;
    }
	else
	{
		NumberArr[index] = value;
		cout << NumberArr[index] << " ";
	}
}

double NumberArray::getNumber(int index) const
{
	if (index > size)
	{
		cout << "Value is outside of array bounds, returning default" << ": ";
		return DefaultVal;
	}
	else
	{
		cout << "returning space " << index << ": ";
		return NumberArr[index];
	}
}

double NumberArray::LowestValue()
{
	double lowestVal = NumberArr[MAX_SIZE];

	for (int c = 0; c < size; c++)
	{
		if (NumberArr[c] < lowestVal)
		{
			lowestVal = NumberArr[c];
		}
	}

	return lowestVal;
}

double NumberArray::HighestValue()
{
	double highestVal = NumberArr[size];

	for (int c = 0; c < size; c++)
	{
		if (NumberArr[c] > highestVal)
		{
			highestVal = NumberArr[c];
		}
	}
	return highestVal;
}

double NumberArray::calcAverage()
{
	double Average = 0.0;
	double sum = 0.0;

	for (int c = 0; c < size; c++)
	{
		sum += NumberArr[c];		
	}
	Average = sum / size;

	return Average;
}

void NumberArray::PrintArray()
{
	cout << "running PrintArray Function" << endl << "------" << endl;
	for (int p = 0; p < size; p++)
	{	
	cout << NumberArr[p] << " ";
    }

	cout << endl<< "------" << endl;

	cout << "the lowest value in the array is " << LowestValue() << "." << endl << "-------" << endl;
	cout << "the highest value in the array is " << HighestValue() << "." << endl << "-------" << endl;
	cout << "the average of all values in the array is " << calcAverage() << "." << endl << "-------" << endl;

}

NumberArray::~NumberArray()
{
	cout << "destructor is running" << endl;
	delete[] NumberArr;
}
