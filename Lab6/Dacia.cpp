#include <iostream>
#include "Dacia.h"
#include "Car.h"

using namespace std;

/*class Dacia : Car
{
	int fcapacity, fconsumption, aspeed[3];
public:
	Dacia();
	void FuelCapacity();
	void FuelConsumption();
	void AverageSpeed(int i);
};*/

Dacia::Dacia()
{
	fcapacity = 1;
	fconsumption = 6;
	aspeed[0] = 40; //Rain
	aspeed[1] = 100; //Sunny
	aspeed[2] = 70; //Snow
}

int Dacia::FuelCapacity()
{
	return fcapacity;
}

int Dacia::FuelConsumption()
{
	return fconsumption;
}

int Dacia::AverageSpeed(int i)
{
	return aspeed[i];
}

void Dacia::Print()
{
	printf("Dacia \n");
}