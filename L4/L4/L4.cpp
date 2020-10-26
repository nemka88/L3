// L4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int m;
	for (int n = 100; n < 1000; n++)
	{
		m = n / 10 % 10;
		if (m != 0 && n%m == 0) cout << n << endl;
	}	
	system("pause");
	return 0;
}