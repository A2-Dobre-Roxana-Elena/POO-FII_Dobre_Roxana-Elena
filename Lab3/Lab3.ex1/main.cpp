#include <iostream>
#include "Math.h"


using namespace std;

int main()
{
	Math m;
	cout << m.Add(3, 4) <<" "<< m.Add(3, 1, 8)  << " " << m.Add(3.9123, 1.348239293) << " " << m.Add(3.934, 4.034, 5.53)<< endl;
	cout << m.Mul(3, 4) << " " << m.Mul(3, 1, 8) << " " << m.Mul (3.9123, 1.348239293) << " " << m.Mul(3.934, 4.034, 5.53)<<endl;
	cout<< m.Add(6, 2, 3, 8, 6, 4, 5)<<endl;
	//cout << m.Add("Ziua", "Buna ");
	return 0;
}