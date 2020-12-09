#pragma once
#include <iostream>
#include <vector>

#include <math.h>

using namespace std;

void Á÷°¢»ï°¢Çü()
{

	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	
	int a, b, c;
	while (1)
	{
		cin >> a >> b >> c;

		if (!a && !b && !c)
			break;
		
		int a2, b2, c2;
		a2 = a * a;
		b2 = b * b;
		c2 = c * c;

		if (a2+b2==c2 || a2+c2==b2||b2+c2==a2)
			cout << "right\n";
		else
			cout << "wrong\n";


	}

	return;


}