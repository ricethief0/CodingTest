#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void 네번째점()
{

	typedef struct tagPoint
	{
		int x;
		int y;
	}Point;

	Point point[3];
	Point answer;
	bool isX = false;
	bool isY = false;
	Point currunt;

	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	
	
	for (int i = 0; i < 3; i++)
	{
		cin >> point[i].x >> point[i].y;
	}

	for (int i = 0; i < 2; i++)
	{
		for (int k = i + 1; k < 3; k++)
		{
			if (point[i].x == point[k].x)
			{
				currunt.x = point[i].x;
			}
			if (point[i].y == point[k].y)
			{
				currunt.y = point[i].y;
			}
	
		}
	}

	for (int i = 0; i < 3; i++)
	{
		if (currunt.x != point[i].x)
			answer.x = point[i].x;
		if (currunt.y != point[i].y)
			answer.y = point[i].y;
			
	}

	cout << answer.x<< " "<< answer.y << endl;


	return;
}