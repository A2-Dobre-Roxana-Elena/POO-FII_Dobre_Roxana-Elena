#pragma once
#include "Car.h"

class Mazda : public Car
{
	int fcapacity, fconsumption, aspeed[3];
public:

	Mazda();
	int FuelCapacity();
	int FuelConsumption();
	int AverageSpeed(int i);
	void Print();
};
