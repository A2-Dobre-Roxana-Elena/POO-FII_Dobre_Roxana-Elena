#include <iostream>
#include "Canvas.h"

using namespace std;

int main()
{
	Canvas firstDraw(10, 10);
	firstDraw.DrawRect( 7, 7 , 9 , 9, 's');
	firstDraw.DrawLine(1, 1, 6, 6, 'd');
	firstDraw.Print();
	firstDraw.Clear();
	firstDraw.FillRect(1, 1, 3, 4,'x');
	firstDraw.FillCircle(6, 6, 2, 'j');
	firstDraw.Print();
	firstDraw.Clear();
	firstDraw.DrawCircle(5, 5, 3, 'o');
	firstDraw.SetPoint(4,4,'^');
	firstDraw.SetPoint(4, 6, '^');
	firstDraw.SetPoint(5, 5, 'c');
	firstDraw.Print();
	return 0;
}