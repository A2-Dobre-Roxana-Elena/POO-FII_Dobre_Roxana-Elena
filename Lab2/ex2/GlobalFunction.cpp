#include "GlobalFunction.h"
#include "student.h"

/*
Student s1, s2;
	void setStudents(Student c1, Student c2);
	friend int compareName();
	friend int compareMath();
	friend int compareEnglish();
	friend int compareHistory();
	friend int compareAverage();
	*/

void Comparison::setStudents(Student c1, Student c2)
{
	this->s1 = c1;
	this->s2 = c2;
}

/*int Comparison::compareName()
{
	int cmp;
	cmp = strcmp(s1.getName, s2.getName);
	return cmp;
}*/

int Comparison::compareMath()
{
	float m1, m2;
	m1 = s1.getMath();
	m2 = s2.getMath();
	if (m1 == m2)
		return 0;
	else
		if (m1 > m2)
			return 1;
		else
			return -1;
}

int Comparison::compareEnglish()
{
	float m1, m2;
	m1 = s1.getEnglish();
	m2 = s2.getEnglish();
	if (m1 == m2)
		return 0;
	else
		if (m1 > m2)
			return 1;
		else
			return -1;
}

int Comparison::compareHistory()
{
	float m1, m2;
	m1 = s1.getHistory();
	m2 = s2.getHistory();
	if (m1 == m2)
		return 0;
	else
		if (m1 > m2)
			return 1;
		else
			return -1;
}

int Comparison::compareAverage()
{
	float m1, m2;
	m1 = s1.getAverage();
	m2 = s2.getAverage();
	if (m1 == m2)
		return 0;
	else
		if (m1 > m2)
			return 1;
		else
			return -1;
}