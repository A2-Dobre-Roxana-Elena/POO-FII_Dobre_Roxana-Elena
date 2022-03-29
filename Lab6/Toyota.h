#pragma once
#include "Car.h"

class Toyota : public Car
{
	int fcapacity, fconsumption, aspeed[3];
public:

	Toyota();
	int FuelCapacity();
	int FuelConsumption();
	int AverageSpeed(int i);
	void Print();
};
