#pragma once
#define _CRT_SECURE_NO_WARNINGS
class Sort

{
    int* vector;
    int nr_elem;

public:

    Sort( int nr_elem, int min, int max);

    Sort(int* p_vector, int nr_elem);

    Sort(int nr_elem, ...);

    Sort(char* c);

    Sort();

    void InsertSort(bool ascendent = false);

    void QuickSort(bool ascendent = false);
    
    void QuickSortRec(int inf, int sup, bool ascendent);
    
    int partition(int low, int high, bool ascendent);

    void BubbleSort(bool ascendent = false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);

};