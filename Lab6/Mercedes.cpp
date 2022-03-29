#include <iostream>
#include "Mercedes.h"
#include "Car.h"

using namespace std;

Mercedes::Mercedes()
{
	fcapacity = 85;
	fconsumption = 4;
	aspeed[0] = 115; //Rain
	aspeed[1] = 130; //Sunny
	aspeed[3] = 90; //Snow
}

int Mercedes::FuelCapacity()
{
	return fcapacity;
}

int Mercedes::FuelConsumption()
{
	return fconsumption;
}

int Mercedes::AverageSpeed(int i)
{
	return aspeed[i];
}

void Mercedes::Print()
{
	printf("Mercedes \n");
}
