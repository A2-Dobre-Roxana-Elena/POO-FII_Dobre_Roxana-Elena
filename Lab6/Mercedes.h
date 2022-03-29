#pragma once
#include "Car.h"

class Mercedes : public Car
{
	int fcapacity, fconsumption, aspeed[3];
public:

	Mercedes();
	int FuelCapacity();
	int FuelConsumption();
	int AverageSpeed(int i);
	void Print();
};