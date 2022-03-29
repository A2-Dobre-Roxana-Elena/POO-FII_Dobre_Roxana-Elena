#include <iostream>
#include "Car.h"
#include "Dacia.h"
#include "Ford.h"
#include "Mazda.h"
#include "Mercedes.h"
#include "Toyota.h"
#include "Weather.h"
#include "Circuit.h"

/*class Circuit
{
	int lenght, i = 0;
	Weather w;
	Car* race[100];
public:
	void SetLenght(int i);
	void SetWeather(Weather i);
	void AddCar(Dacia d);
	void AddCar(Toyota t);
	void AddCar(Mercedes me);
	void AddCar(Ford f);
	void AddCar(Mazda ma);
	void Race();
	void ShowFinalResults();
	void ShowWhoDidNotFinish();
};*/

void Circuit::SetLenght(int i)
{
	lenght = i;
}

void Circuit::SetWeather(Weather i)
{
	w = i;
}

void Circuit::AddCar(Dacia* d)
{
	this->race[irace++] = d;
}

void Circuit::AddCar(Toyota* t)
{
	this->race[irace++] = t;
}

void Circuit::AddCar(Mercedes* me)
{
	this->race[irace++] = me;
}

void Circuit::AddCar(Mazda* ma)
{
	this->race[irace++] = new Mazda();
}

void Circuit::AddCar(Ford* f)
{
	this->race[irace++] = new Ford();
}

void Circuit::Race()
{
	int weather = 0, nrlitrinecesari = 0, speed = 0;
	if (w == Sunny)
		weather = 1;
	if (w == Snow)
		weather = 2;
	for (int j = 0; j < irace; j++)
	{
		nrlitrinecesari = race[j]->FuelConsumption() * lenght / 100;
		if (nrlitrinecesari > race[j]->FuelCapacity())
		{
			didnotfinish[ididnotfinish++] = race[j];
		}
		else
		{
			speed = race[j]->AverageSpeed(weather); ///viteza in functie de vreme
			results[iresults] = float(lenght) / float(speed);
			finalranks[iresults++] = race[j];
		}
	}
}

void Circuit::ShowFinalRanks()
{
	printf("The final rank is : \n");
	int i, j, aux;
	Car* aux1;
	for (i = 0; i < iresults; i++)
		for (j = i + 1; j < iresults; j++)
		{
			if (results[i] > results[j])
			{
				aux = results[i];
				results[i] = results[j];
				results[j] = aux;
				aux1 = finalranks[j];
				finalranks[j] = finalranks[i];
				finalranks[i] = aux1;
			}
		}
	for (j = 0; j < iresults; j++)
	{
		printf("%f  ", results[j]);
		finalranks[j]->Print();
		printf("\n");
	}
	printf("\n");
}

void Circuit::ShowWhoDidNotFinish()
{
	printf("Cars that did not finish the race: \n");
	for (int j = 0; j < ididnotfinish; j++)
		didnotfinish[j]->Print();
	printf("\n");
}