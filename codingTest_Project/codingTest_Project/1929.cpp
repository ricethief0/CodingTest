#pragma once
#include <iostream>
#include <vector>
using namespace std;

void 소수구하기()
{

	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	int m, n;

	cin >> m >> n;

	vector<int> a;
	a.resize(n+1);
	a[0] = 1;
	a[1] = 1;

	for (int i = 2; i <= n; i++)
	{
		if (a[i]) continue;

		for (int k = 2 * i; k <= n; k += i)
		{
			a[k] = 1;
		}
	}

	for (int i = m; i <= n; i++)
	{
		if (!a[i])printf("%d\n", i);
	}

	return;


}