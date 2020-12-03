#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//
//void 베르트랑공준()
//{
//
//	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
//	
//	int m = 1;
//
//	const int maxNum= 246913;
//
//	bool arr[maxNum] = { 1,1};
//
//	for (int i = 2; i <= maxNum; i++)
//	{
//		if (arr[i]) continue;
//		
//		for (int k = i * 2; k <= maxNum; k += i)
//		{
//			arr[k] = 1;
//		}
//	}
//	
//	while (1)
//	{
//		cin >> m;
//
//		if (m == 0)break;
//
//		int count = 0;
//		int mMax = m * 2;
//		for (int k = m + 1; k <= mMax; k++)
//		{
//			if (!arr[k]) count++;
//		}
//		printf("%d\n", count);
//		
//	}
//
//	return;
//}

void 베르트랑공준() // 속도는 더 빠름
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);

	int m = 1;

	vector<int> input;

	while (1)
	{
		cin >> m;
		input.push_back(m);
		if (m == 0)break;
	}

	vector<int> oInput = input;
	sort(input.begin(), input.end());
	int inputSize = input.size();

	int maxNum = input[inputSize - 1] * 2;

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

	for (int i = 0; i < inputSize; i++)
	{
		int in = oInput[i];
		if (in == 0)break;

		int count = 0;
		int in2 = in * 2;
		for (int k = in + 1; k <= in2; k++)
		{
			if (!arr[k]) count++;
		}
		printf("%d\n", count);
	}

	return;

}