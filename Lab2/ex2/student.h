#pragma once
#include <string>
class Student
{

	char name[10];
	float Math;
	float English;
	float History;
public:

	void  setName( const char n[10]);
	//char getName();
	void  setMath(float n);
	float getMath();
	void  setEnglish(float n);
	float getEnglish();
	void  setHistory(float n);
	float getHistory();
	float getAverage();

};