
#include <iostream>
using namespace std;

#ifndef NumberArray_H
#define NumberArray_H

#include <random>

class NumberArray
{
public:
	NumberArray(int size = MAX_SIZE);

	void setArray(int index, double value);

	double getNumber(int index) const;

	double LowestValue();

	double HighestValue();

	double calcAverage();

	void PrintArray();

	~NumberArray();


private:
	static const int MAX_SIZE = 10;
	static const int DefaultVal = 0.0;
	double* NumberArr;
	int size;
};

#endif
