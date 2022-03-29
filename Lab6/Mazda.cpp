#include <iostream>
#include "Mazda.h"
#include "Car.h"

using namespace std;

Mazda::Mazda()
{
	fcapacity = 65;
	fconsumption = 6;
	aspeed[0] = 90; //Rain
	aspeed[1] = 100; //Sunny
	aspeed[3] = 75; //Snow
}

int Mazda::FuelCapacity()
{
	return fcapacity;
}

int Mazda::FuelConsumption()
{
	return fconsumption;
}

int Mazda::AverageSpeed(int i)
{
	return aspeed[i];
}

void Mazda::Print()
{
	printf("Mazda \n");

}