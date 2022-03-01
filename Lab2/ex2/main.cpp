#include <iostream>
#include "student.h"
#include "GlobalFunction.h"

using namespace std;


int main()
{
	Student s1, s2, s3;
	s1.setName("Ana");
	s1.setMath(2.0);
	s1.setEnglish(3.0);
	s1.setHistory(6.0);
	cout << s1.getEnglish() << " " << s1.getHistory() << " ";
	cout << s1.getMath() << " " << s1.getAverage() << endl;
	s2.setName("Maria");
	s2.setMath(4.0);
	s2.setEnglish(5.0);
	s2.setHistory(9.0);
	cout << s2.getEnglish() << " " << s2.getHistory() << " ";
	cout << s2.getMath() << " " << s2.getAverage() << endl;
	s3.setName("Luca");
	s3.setMath(9.0);
	s3.setEnglish(8.0);
	s3.setHistory(7.0);
	cout << s3.getEnglish() << " " << s3.getHistory() << " ";
	cout << s3.getMath() << " " << s3.getAverage() << endl;
	Comparison c1, c2;
	c1.setStudents(s1, s2);
	int c = c1.compareAverage();
	if (c == 0)
		cout << " Studentii Ana si Maria au aceeasi medie"; 
	if (c == 1)
		cout << " Ana are medie mai mare decat Maria";
	if (c == -1)
		cout << " Maria are medie mai mare decat Ana";
	cout << endl;
	c2.setStudents(s2, s3);
	c= c2.compareAverage();
	if (c == 0)
		cout << " Studentii Luca si Maria au aceeasi medie";
	if (c == 1)
		cout << " Maria are medie mai mare decat Luca";
	if (c == -1)
		cout << " Luca are medie mai mare decat Maria";
	return 0;
}