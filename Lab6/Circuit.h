#pragma once
#include "Car.h"
#include "Dacia.h"
#include "Ford.h"
#include "Mazda.h"
#include "Mercedes.h"
#include "Toyota.h"
#include "Weather.h"

class Circuit
{
	//int lenght, irace = 0,ididnotfinish=0,iresults=0;
	float results[100];
	Weather w;

public:
	int lenght = 0, irace = 0, ididnotfinish = 0, iresults = 0;
	Car* race[100];
	Car* didnotfinish[100];
	Car* finalranks[100];
	void SetLenght(int i);
	void SetWeather(Weather i);
	void AddCar(Dacia* d);
	void AddCar(Toyota* t);
	void AddCar(Mercedes* me);
	void AddCar(Ford* f);
	void AddCar(Mazda* ma);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
};
