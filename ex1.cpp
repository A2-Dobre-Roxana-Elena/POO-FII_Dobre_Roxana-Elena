#include <iostream>
#include <stdio.h>
#pragma warning(disable: 4996)
using namespace std;

int digits(char c)
{
	if (c == '0')
		return 0;
	if (c == '1')
		return 1;
	if (c == '2')
		return 2;
	if (c == '3')
		return 3;
	if (c == '4')
		return 4;
	if (c == '5')
		return 5;
	if (c == '6')
		return 6;
	if (c == '7')
		return 7;
	if (c == '8')
		return 8;
	if (c == '9')
		return 9;
}

long int myatoi(char nr[100])
{
	int i,j=0;
	long int mynr = 0;
	char c;
	for ( i = 0; i < strlen(nr)-1; i++)           ///parcurg fiecare cifra a string-ului
	{
		j = digits(nr[i]);
		mynr = mynr * 10 + j;					 ///pentru a forma numarul de tip int
	}
	return mynr;
}

int main()
{
	FILE* fptr;									///pointer la fisier pentru citire
	if (fopen_s(&fptr, "in.txt", "r") != 0)
	{
		printf("Eroare la deschiderea fisierului\n");
	}
	else
	{
		char nr[100];
		long int sum = 0;
		while (fgets(nr, 100, fptr)!=NULL)     ///cat timp se citeste din fisier, se formeaza suma dorita
		{
			sum += myatoi(nr);
		}
		printf("Suma numerelor din fisierul 'in.txt' este : %d\n", sum);
	}

	return 0;
}