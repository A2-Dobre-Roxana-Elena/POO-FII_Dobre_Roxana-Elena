#pragma once
#include "Car.h"

class Ford : public Car
{
	int fcapacity, fconsumption, aspeed[3];
public:

	Ford();
	int FuelCapacity();
	int FuelConsumption();
	int AverageSpeed(int i);
	void Print();
};
