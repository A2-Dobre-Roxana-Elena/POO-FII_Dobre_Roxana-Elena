#include "NumberList.h"
#include <iostream>

using namespace std;


void NumberList :: Init()
{
	this->count = 0;
}

bool NumberList:: Add(int x)
{
    if (this->count >= 10)
        return false;
    else
    {
        numbers[count++] = x;
    }
}

void NumberList::Sort()
{
    int i, j, aux;
    for( i=0;i<count-1;i++)
        for ( j = i + 1; j < count; j++)
        {
            if (numbers[i] > numbers[j])
            {
                aux = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = aux;
            }
        }
}

void NumberList::Print()
{
    cout << "The list contains the following numbers" << endl;
    for (int i = 0; i < count; i++)
        cout <<numbers[i]<<" ";
    cout << endl;
}
