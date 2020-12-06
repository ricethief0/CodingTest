#pragma once
#include <iostream>

using namespace std;

void ¼Ò¼ö()
{

	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	int sum = 0;
	int min=0;
	int m, n;
	bool isInFirst = false;
	
	cin >> m >> n;
	
	int current = m;

	while (current <= n)
	{
		for (int i = 2; i <= current; i++)
		{
			if(i == current)
			{
				sum += current;
				if (!isInFirst)
				{
					isInFirst = true;
					min = current;
				}
				break;
			}
			if (current % i == 0)
			{
				break;
			}
		}
		current++;
	}
	if (min == 0)
		cout << -1;
	else
	{
	cout << sum << "\n";
	cout << min << "\n";
	}

	return;


}