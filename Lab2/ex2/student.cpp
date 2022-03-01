#include "student.h"
#include <cstring>

/*
char name[10];
	float Math;
	float English;
	float History;
public:

	void  setName( char n[10]);
	char  getName();
	void  setMath(float n);
	float getMath();
	void  setEnglish(float n);
	float getEnglish();
	void  setHistory(float n);
	float getHistory();
	float getAverage();
*/

void Student::setName(const char n[10])
{
	strcpy_s(this->name, n);
}

//char Student::getName()       /// in cel mai rau caz copiez in ceva
//{
	//return this->name;
//}

void Student::setMath(float n)
{
	this->Math = n;
}
 
float Student::getMath()       
{
	return Math;
}

void Student::setEnglish(float n)
{
	this->English = n;
}

float Student::getEnglish()
{
	return English;
}

void Student::setHistory(float n)
{
	this->History = n;
}

float Student::getHistory()
{
	return History;
}

float Student::getAverage()
{
	float avg;
	avg = (Math + English + History) / 3.0;
	return avg;
}