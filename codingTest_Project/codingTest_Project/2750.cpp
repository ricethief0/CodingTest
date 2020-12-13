#pragma once
#include <iostream>


using namespace std;

void 수정렬하기()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);

	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		
	}
	
	for (int i = 0; i < n - 1; i++)
	{
		for (int k = i; k < n; k++)
		{
			if (arr[i] > arr[k])
			{
				int temp = arr[i];
				arr[i] = arr[k];
				arr[k] = temp;
			}
			
		}
	}

	for (int i = 0; i < n; i++)
		cout << arr[i];


	return;
}