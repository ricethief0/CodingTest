#pragma once
#include <iostream>
#include <queue>


using namespace std;

int map[201][201];

int m, n;

int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
struct tagPoint {
	int x, y;
};

int ¹Ì·ÎÅ½»öBFS(int x, int y)
{
	queue<tagPoint> q;
	q.push({ x,y });
	while (!q.empty())
	{
		int x = q.front().x;
		int y = q.front().y;
		q.pop();
		
		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx<0 || nx>=m || ny<0 || ny>=n)continue;

			if (map[ny][nx] == 0) continue;
			if (map[ny][nx] == 1)
			{
				map[ny][nx] = map[y][x] + 1;
				q.push({ nx,ny });
			}

		}


	}
	return map[n - 1][m - 1];
	
}
void ¹Ì·ÎÅ½»ö()
{

	//ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);

	
	cin >> n>> m;
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < m; k++)
		{
			scanf_s("%1d", &map[i][k]);
		}
	}
		
	std::cout << ¹Ì·ÎÅ½»öBFS(0, 0);

	return;


}