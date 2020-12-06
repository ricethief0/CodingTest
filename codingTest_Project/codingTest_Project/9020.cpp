#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void ∞ÒµÂπŸ»Â¿«√ﬂ√¯()
{

	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	int m = 0;

	vector<int> input;

	cin >> m;

	for(int i=0; i<m; i++)
	{
		int n;
		cin >> n;
		input.push_back(n);
	}

	vector<int> oInput = input;
	sort(input.begin(), input.end());
	int inputSize = input.size();

	int maxNum = input[inputSize - 1];

	vector<int> arr;
	arr.resize(maxNum + 1);
	arr[0] = 1;
	arr[1] = 1;

	for (int i = 2; i <= maxNum; i++)
	{
		if (arr[i]) continue;

		for (int k = i * 2; k <= maxNum; k += i)
		{
			arr[k] = 1;
		}
	}


	//==================== √‚∑¬

	for (int i = 0; i < inputSize; i++)
	{
		int in = oInput[i];
		int half = in / 2;
		if (!arr[half])
			printf("%d %d\n", half, half);
		else 
		{
			int max = half, min = half;
			while(1)
			{
				min--;
				max++;
				if (!arr[min] && !arr[max])
					break;
			}

			printf("%d %d\n", min, max);
			
		}

	}
	
	return;

}