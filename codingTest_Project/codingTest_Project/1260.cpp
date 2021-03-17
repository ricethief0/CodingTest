#pragma once
#include <iostream>
#include <queue>




using namespace std;

vector<vector<int>> index;
vector<bool> check;
void DFS(int start);
void BFS(int start);

void DFS¿ÍBFS()
{
	int num, node, start;
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	cin >> num >> node >> start;
	index.resize(num+1);
	check.resize(num+1);
	for (int i = 0; i < node; i++)
	{
		int a, b;
		cin >> a >> b;
		index[a].push_back(b);
		index[b].push_back(a);
	}
	for (int i = 0; i < num; i++)
		sort(index[i].begin(), index[i].end());

	cout << start << " ";
	check[start] = true;
	DFS(start);



	fill(check.begin(), check.end(),0);
	BFS(start);


	return;
}


void DFS(int start)
{
	for (int i = 0; i < index[start].size(); i++)
	{
		if (check[index[start][i]]) continue;

		check[index[start][i]] = true;
		cout << index[start][i] << " ";
		DFS(index[start][i]);
	}
}

void BFS(int start)
{
	queue<int> q;
	cout << '\n';
	cout << start << " ";
	check[start] = true;

	q.push(start);
	while (!q.empty())
	{
		int num = q.front();
		q.pop();

		for (int i = 0; i < index[num].size(); i++)
		{

			if (check[index[num][i]])continue;

			check[index[num][i]] = true;
			cout << index[num][i] << " ";
			q.push(index[num][i]);
		}
		
	}
}
