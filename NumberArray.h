
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

	int getNumber(int index);

	int LowestValue();

	int HighestValue();

	int calcAverage();

	~NumberArray();


private:
	static const int MAX_SIZE = 10;
	static const double DefaultVal;
};

#endif
