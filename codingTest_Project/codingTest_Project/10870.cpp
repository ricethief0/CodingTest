#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Fibonacci(int n)
{
	if (n < 2)
		return n;
	else if (n >= 2)
		return Fibonacci(n - 2) + Fibonacci(n - 1);
}

void 피보나치수5()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);

	int a;
	cin >> a;
	
	cout << Fibonacci(a) << endl;

	return;

}