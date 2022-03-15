#include <iostream>
#include "Sort.h"
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

int main()
{
	int i;
	Sort c1(10, 10, 100);
	cout << "Vectorul declarat este egal cu: ";
	c1.Print();
	cout << "Vectorul dupa sortare ascendenta de tip Insert Sort este: ";
	c1.InsertSort(1);
	c1.Print();
	i = c1.GetElementsCount();
	cout << "Numarul de elemente din vector este egal cu: " << i << endl;
	i = c1.GetElementFromIndex(4);
	cout << "Numarul de elemente din vector de la pozitia 4 este egal cu: " <<i << endl;
	cout << endl << endl;
	
	int v[5] = { 1, 2, 3, 4, 5 };
	Sort c2(v, 5);
	cout << "Vectorul declarat este egal cu: ";
	c2.Print();
	cout << "Vectorul dupa sortare descendenta de tip Insert Sort este: ";
	c2.InsertSort();
	c2.Print();
	cout << endl << endl;

	Sort c3(6, 1, 2, 3, 4, 5, 6);
	cout << "Vectorul declarat este egal cu: ";
	c3.Print();
	cout << "Vectorul dupa sortare descendenta de tip Quick Sort este: ";
	c3.QuickSort();
	c3.Print();
	cout << endl << endl;

	char c[] = "34,12,78";
	Sort c4(c);
	cout << "Vectorul declarat este egal cu: ";
	c4.Print();
	cout << "Vectorul dupa sortare ascendenta de tip Quick Sort este: ";
	c4.QuickSort(1);
	c4.Print();
	cout << endl << endl;

	Sort c5;
	cout << "Vectorul declarat este egal cu: ";
	c5.Print();
	cout << "Vectorul dupa sortare descendenta de tip Bubble Sort este: ";
	c5.BubbleSort();
	c5.Print();
	cout << endl << endl;

	char d[] = "100,34,212,78";
	Sort c6(d);
	cout << "Vectorul declarat este egal cu: ";
	c6.Print();
	cout << "Vectorul dupa sortare ascendenta de tip Bubble Sort este: ";
	c6.BubbleSort(1);
	c6.Print();

	system("pause");
	return 0;
}