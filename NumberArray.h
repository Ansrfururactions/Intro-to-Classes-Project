
#include <iostream>
using namespace std;

#ifndef NumberArray_H
#define NumberArray_H

#include <random>

class NumberArray
{
public:
	NumberArray(int size);

	void setArray(int index, double value);

	int getNumber(int index) const;

	double LowestValue();

	double HighestValue();

	double calcAverage();

	void PrintArray();

	~NumberArray();


private:
	static const int MAX_SIZE = 10;
	static const int DefaultVal = 0;
	double* NumberArr;
};

#endif
