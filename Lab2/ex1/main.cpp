#include <iostream>
#include "NumberList.h"
using namespace std;

int main()
{
	NumberList n;
	n.Init();
	int h = 30;
	while (n.Add(h)&&h>0)
		h -= 2;
	n.Print();
	cout <<"The list of numbers will be sorted"<<endl;
	n.Sort();
	n.Print();
	return 0;
}
