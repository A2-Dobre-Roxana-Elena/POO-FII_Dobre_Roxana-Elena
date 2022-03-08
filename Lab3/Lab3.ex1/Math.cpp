#include "Math.h"
#include <cstdarg>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


using namespace std;
/*
class Math
{
public:
    static int Add(int, int);
    static int Add(int, int, int);
    static int Add(double, double);
    static int Add(double, double, double);
    static int Mul(int, int);
    static int Mul(int, int, int);
    static int Mul(double, double);
    static int Mul(double, double, double);
    static int Add(int count, ...); // sums up a list of integers
    static char* Add(const char*, const char*);
};
*/

 int Math:: Add(int x , int y)
{
     return x + y;
}

 int Math::Add(int x, int y, int z)
 {
     return x + y+z;
 }

int  Math::Add(double x, double y)
 {
    return  int(x + y);
 }

int  Math::Add(double x, double y,double z)
{
    return  int(x + y+z);
}

int Math::Mul(int x, int y)
{
    return x * y;
}

int Math::Mul(int x, int y, int z)
{
    return x * y * z;
}

int  Math::Mul(double x, double y)
{
    return  int(x * y);
}

int  Math::Mul (double x, double y, double z)
{
    return  int(x * y * z);
}

int Math::Add(int count, ... )
{
    int sum=0;
    va_list arg;
    va_start(arg, count);
    while (count != 0)
    {
        sum += va_arg(arg, int);
        count--;
    }
    return sum;
}

char* Math::Add(const char* a, const char* b)
{
    if (a == nullptr || b == nullptr)
        return nullptr;
    char* rez = (char*)malloc(strlen(a) + strlen(b)+1); // len+1, deoarece avem si un '\0' la final
    /*rez[0] = NULL;
    strcpy(rez, a);
    strcat(rez, b);

    sau 
     strcpy_s(rez, sizeof rez, a);
    strcat_s(rez,sizeof rez, b);

    */
    return rez;
}

