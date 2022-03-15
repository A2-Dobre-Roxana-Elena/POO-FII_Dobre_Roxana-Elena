#include "Sort.h"
#include <iostream>
#include <stdio.h> 
#include <time.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

Sort::Sort(int nr_elem, int min, int max)
{
    this->nr_elem = nr_elem;
	vector = (int*)(malloc(nr_elem * sizeof(int)));
	time_t t;
	srand((unsigned)time(&t));
	for (int i = 0; i < nr_elem; i++) {
		vector[i] = min + rand() % (min - max + 1) ;
	}
}

Sort::Sort(int* p_vector, int nr_elem) {
    this->nr_elem = nr_elem;
    vector = (int*)(malloc(nr_elem * sizeof(int)));
    for (int i = 0; i < nr_elem; i++) {
        vector[i] = p_vector[i];
    }
}

Sort::Sort(int nr_elem, ...) {
    this->nr_elem = nr_elem;
    vector = (int*)(malloc(nr_elem * sizeof(int)));
    va_list vl;
    va_start(vl, nr_elem);
    for (int i = 0; i < nr_elem; i++)
    {
        vector[i] = va_arg(vl, int);
    }
    va_end(vl);
}

Sort::Sort(char* c) {
    vector = (int*)(malloc(strlen(c) * sizeof(int)));
    int i = 0;
    char* p;
    p = strtok(c,",");
    while (p != NULL)
    {
        this->vector[i++] = atoi(p); ///;
        p = strtok(NULL, ",");
    }
    vector[i] = NULL;
    this->nr_elem = i;
}

Sort::Sort()  
{
    this->vector = new int[10]{ 1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
    this->nr_elem = 10;
};


void Sort::BubbleSort(bool ascendent)
{
    int i, j, aux, n = GetElementsCount();
    if (ascendent)
    {
        for (i = 0; i < n - 1; i++)
            for (j = 0; j < n - i - 1; j++)
                if (vector[j] > vector[j + 1])
                {
                    aux = vector[j];
                    vector[j] = vector[j + 1];
                    vector[j + 1] = aux;
                }
    }
    else
    {
        for (i = 0; i < n - 1; i++)
            for (j = 0; j < n - i - 1; j++)
                if (vector[j] < vector[j + 1])
                {
                    aux = vector[j];
                    vector[j] = vector[j + 1];
                    vector[j + 1] = aux;
                }
    }

}

void Sort::InsertSort(bool ascendent )
{
    int n = GetElementsCount();
    if (ascendent)
    {
        int i, key, j;
        for (i = 1; i < n; i++)
        {
            key = vector[i];
            j = i - 1;
            while (j >= 0 && vector[j] > key)
            {
                vector[j + 1] = vector[j];
                j = j - 1;
            }
            vector[j + 1] = key;
        }
    }
    else
    {
        int i, key, j;
        for (i = 1; i < n; i++)
        {
            key = vector[i];
            j = i - 1;
            while (j >= 0 && vector[j] < key)
            {
                vector[j + 1] = vector[j];
                j = j - 1;
            }
            vector[j + 1] = key;
        }
    }
}

void Sort::QuickSort(bool ascendent)
{
    int inf = 0, sup = GetElementsCount();
    QuickSortRec(inf, sup-1, ascendent);
}


int Sort::partition( int low, int high, bool ascendent)
{
    int pivot = vector[high]; // pivot
    int i = (low - 1),t; // Index of smaller element and indicates the right position of pivot found so far
    if (ascendent)
        {for (int j = low; j <= high - 1; j++)
        {
            // If current element is smaller than the pivot
            if (vector[j] < pivot)
            {
                i++; // increment index of smaller element
                t = vector[i];
                vector[i] = vector[j];
                vector[j] = t;
            }
        }
         t = vector[i + 1];
         vector[i + 1] = vector[high];
         vector[high] = t;
         return (i + 1); }
    else
    {
        for (int j = low; j <= high - 1; j++)
        {
            // If current element is smaller than the pivot
            if (vector[j] > pivot)
            {
                i++; // increment index of smaller element
                t = vector[i];
                vector[i] = vector[j];
                vector[j] = t;
            }
        }
        t = vector[i + 1];
        vector[i + 1] = vector[high];
        vector[high] = t;
        return (i + 1);
    }
}


void Sort::QuickSortRec(int low, int high, bool ascendent)
{
    if (ascendent)
    {
        if (low < high)
        {
            int pi = partition(low, high,ascendent);
            QuickSortRec(low, pi - 1, ascendent);
            QuickSortRec(pi + 1, high, ascendent);
        }
    }
    else
    {
        if (low < high)
        {
            int pi = partition(low, high, ascendent);
            QuickSortRec(low, pi - 1, ascendent);
            QuickSortRec(pi + 1, high, ascendent);
        }
    }
}


void Sort::Print()
{
    cout << endl;
	int i, n = GetElementsCount();
	for (i = 0; i < n; i++)
		cout << this->vector[i] << " ";
	cout << endl;

}

int Sort::GetElementsCount()
{
    return this->nr_elem;
}

int Sort::GetElementFromIndex(int index)
{
    return this->nr_elem - index;
}