#pragma once
#include <iostream>



using namespace std;

void 소수찾기()
{
	
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	
	int n;
	cin >> n;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		if (a == 1)
			continue;
		for (int k = 2; k <= a; k++)
		{
			if (k == a)
				count++;
			if (a % k == 0)
				break;
		}
	}
	cout << count << "\n";

	return ;


}