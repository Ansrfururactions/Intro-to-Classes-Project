#pragma once

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
		static int MAX_SIZE;
};

