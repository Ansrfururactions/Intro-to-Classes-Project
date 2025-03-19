
#include <iostream>
using namespace std;

#ifndef NumberArray_H
#define NumberArray_H

#include <random>

class NumberArray
{
public:
	NumberArray(int size = MAX_SIZE);//constructor, dynamically allocates an array.

	void setArray(int index, double value);// checks the index to ensure it's valid

	double getNumber(int index) const;// checks the index to ensure it's valid, then returns the specified value from the array

	double LowestValue();// scans through the arrray to find the lowest value.

	double HighestValue();// scans through the arrray to find the highest value.

	double calcAverage();// adds the values in the array and calculates the average.

	void PrintArray();// prints array

	~NumberArray();//deletes allocated memory


private:
	static const int MAX_SIZE = 10;
	static const int DefaultVal = 0.0;
	double* NumberArr;
	int size;
};

#endif
