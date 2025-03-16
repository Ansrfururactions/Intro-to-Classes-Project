#include "NumberArray.h"
#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

NumberArray::NumberArray(int size) : MAX_SIZE(size)
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
	
	
	if (index > *NumberArr)
	{
		
		cout << "Value is outside of array bounds, Storage failed, index was " << index << ", value recieved as check " << *NumberArr<< endl;
    }
	else
	{
		NumberArr[index] = value;
		cout << NumberArr[index] << " ";
	}
}

int NumberArray::getNumber(int index) const
{
	if (index > MAX_SIZE)
	{
		cout << "Value is outside of array bounds, returning default" << endl;
		return DefaultVal;
	}
	else
	{
		cout << "returning space" << index << endl;
		return index;
	}
}

double NumberArray::LowestValue()
{
	double lowestVal = NumberArr[MAX_SIZE];

	for (int c = 0; c < MAX_SIZE; c++)
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
	double highestVal = NumberArr[MAX_SIZE];

	for (int c = 0; c < MAX_SIZE; c++)
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

	for (int c = 0; c < sizeof (NumberArr); c++)
	{
		sum += NumberArr[c];		
	}
	Average = sum / sizeof(NumberArr);

	return Average;
}

void NumberArray::PrintArray()
{
	for (int p = 0; p < MAX_SIZE; p++)
	{	
	cout << NumberArr[p] << " ";
    }

	cout << endl << endl;

	cout << "the lowest value in the array is " << LowestValue() << "." << endl << "-------" << endl;
	cout << "the highest value in the array is " << HighestValue() << "." << endl << "-------" << endl;
	cout << "the average of all values in the array is " << calcAverage() << "." << endl << "-------" << endl;

}

NumberArray::~NumberArray()
{
	cout << "destructor is running" << endl;
	delete[] NumberArr;
}
