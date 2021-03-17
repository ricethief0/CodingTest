#include <iostream>
#include <vector>
//#include <queue>

using namespace std;

namespace VIRUS {
	int computer;
	int node;
	int count=0;
	vector<vector<int>> map;
	vector<int> check;
}



int 바이러스DFS(int start)
{
	for (int i = 0; i < VIRUS::map[start].size(); i++)
	{
		if (VIRUS::check[VIRUS::map[start][i]]) continue;

		VIRUS::check[VIRUS::map[start][i]] = true;
		
		바이러스DFS(VIRUS::map[start][i]);
		VIRUS::count++;
	}
	return VIRUS::count;
}
void 바이러스()
{
	cin >> VIRUS::computer >> VIRUS::node;

	VIRUS::map.resize(VIRUS::computer+1);
	VIRUS::check.resize(VIRUS::computer+1);
	for (int i = 0; i < VIRUS::node; i++)
	{
		int a, b;
		cin >> a >> b;
		VIRUS::map[a].push_back(b);
		VIRUS::map[b].push_back(a);
	}

	VIRUS::check[1] = 1;
	cout<<바이러스DFS(1);
}