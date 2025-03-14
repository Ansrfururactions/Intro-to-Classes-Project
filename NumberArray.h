

#ifdef NumberArray.h
#define NumberArray.h

#include <iostream>
#include <random>

using namespace std;
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
		static const double DefaultVal = 0.0;
};
#endif
