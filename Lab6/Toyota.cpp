#include <iostream>
#include "Toyota.h"
#include "Car.h"


Toyota::Toyota()
{
	fcapacity = 65;
	fconsumption = 5;
	aspeed[0] = 70; //Rain
	aspeed[1] = 105; //Sunny
	aspeed[2] = 85; //Snow
}

int Toyota::FuelCapacity()
{
	return fcapacity;
}

int Toyota::FuelConsumption()
{
	return fconsumption;
}

int Toyota::AverageSpeed(int i)
{
	return aspeed[i];
}

void Toyota::Print()
{
	printf("Toyota \n");
}