#pragma once
#include <iostream>
#include <vector>
#include <queue>
#include <set>
using namespace std;


class CBFS
{
public:
	/*int Insert(int num)
	{
		list.push_back(num);
	}*/
	void BFSPrint(int startNum)
	{
		
		queue<int> q;
		q.push(startNum);
		c[startNum] = true;

		while (!q.empty())
		{
			int x = q.front();
			q.pop();
			printf("%d", x);
			for (int i = 0; i<a[x].size(); i++)
			{
				int y = a[x][i];
				if (!c[y])
				{
					q.push(y);
					c[y] = true;
				}
			}
		}

		
	}
	vector<int> a[8];
private:
	int number = 7;
	int c[8] = { 0, };
	

};


void BFS()
{
	
	CBFS bfs;
	bfs.a[1].push_back(2);
	bfs.a[1].push_back(3);
	bfs.a[2].push_back(1);
	bfs.a[3].push_back(1);
	bfs.a[2].push_back(3);
	bfs.a[3].push_back(2);

	bfs.a[2].push_back(4);
	bfs.a[2].push_back(5);
	bfs.a[4].push_back(2);
	bfs.a[5].push_back(2);
	bfs.a[4].push_back(5);
	bfs.a[5].push_back(4);

	bfs.a[3].push_back(6);
	bfs.a[3].push_back(7);
	bfs.a[6].push_back(3);
	bfs.a[7].push_back(3);
	bfs.a[6].push_back(7);
	bfs.a[7].push_back(6);

	bfs.BFSPrint(6);

	
	const int a = 10;
	const int b = 20;
	int res1 = a * 100 / b;
	int res2 = a / b * 100;
	int res3 = 10 / 20*100;
	printf("\n1. %d \n2. %d\n3. %d", res1, res2,res3);

	return;

}