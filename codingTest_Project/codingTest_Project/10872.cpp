#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Factoryal(int n)
{
	if (n == 0)
		return 1;
	else
		return n*Factoryal(n - 1);
}

void ÆÑÅä¸®¾ó()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	
	int a;
	cin >> a;
	cout << Factoryal(a) << endl;

	return;

}