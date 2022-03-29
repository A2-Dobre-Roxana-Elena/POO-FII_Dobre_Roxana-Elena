#pragma once
#include "Car.h"

class Dacia : public Car
{
	int fcapacity, fconsumption, aspeed[3];
public:

	Dacia();
	int FuelCapacity();
	int FuelConsumption();
	int AverageSpeed(int i);
	void Print();
};
