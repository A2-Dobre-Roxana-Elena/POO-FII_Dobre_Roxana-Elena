#include <iostream>
#include "Ford.h"
#include "Car.h"

using namespace std;


Ford::Ford()
{
	fcapacity = 80;
	fconsumption = 4;
	aspeed[0] = 45; //Rain
	aspeed[1] = 105; //Sunny
	aspeed[3] = 85; //Snow
}

int Ford::FuelCapacity()
{
	return fcapacity;
}

int Ford::FuelConsumption()
{
	return fconsumption;
}

int Ford::AverageSpeed(int i)
{
	return aspeed[i];
}

void Ford::Print()
{
	printf("Ford \n");
}