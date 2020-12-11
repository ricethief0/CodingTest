#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct tagBody {
	int height;
	int weight;
};

void µ¢Ä¡()
{

	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);

	int max;
	cin >> max;
	vector<tagBody> people;
	for (int i = 0; i < max; i++)
	{
		tagBody body;
		
		cin >> body.weight >> body.height;
		
		people.push_back(body);
	}
	for (int i = 0; i < max; i++)
	{
		int rank =1;
		for (int k = 0; k < max; k++)
		{
			if (people[i].height < people[k].height && people[i].weight < people[k].weight)
			{
				rank++;
			}
		}

		cout << rank << " ";
	}

	return;
}