#pragma once
#include "student.h"

class Comparison
{
public:
	Student s1, s2;
	void  setStudents(Student c1, Student c2);
	//int compareName();
	int compareMath();
	int compareEnglish();
	int compareHistory();
	int compareAverage();
};