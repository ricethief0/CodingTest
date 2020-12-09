#pragma once
#include <iostream>
#include <vector>

using namespace std;

void ºí·¢Àè()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);

	int cardMax, maxNum;
	cin >> cardMax >> maxNum;
	vector<int> card;
	
	for (int i = 0; i <cardMax;i++ )
	{
		int num;
		cin >> num;
		card.push_back(num);
	}
	int answer = 0;
	for (int i = 0; i < cardMax - 2; i++)
	{
		for (int j = i + 1; j < cardMax - 1; j++)
		{
			for (int k = j + 1; k < cardMax; k++)
			{
				int temp = 0;
				temp += card[i];
				temp += card[j];
				temp += card[k];
				if (temp <= maxNum && answer<temp)
				{
					answer = temp;
				}
			}
		}
	}
	
	

	cout <<answer;

	return;

}