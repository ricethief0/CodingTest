#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void 체스판다시칠하기()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);

	int n,m;
	cin >> n>>m;

	const int max = n * m;
	
	vector<char> board;
	board.reserve(max);
	
	for (int i = 0; i < max; i++)
	{
		char in;
		cin >> in;
		board.push_back(in);
	}
	int answer = 0;
	char start;
	for (int i = 0; i < n; i++)
	{
		
		for (int k = 0; k < m; k++)
		{
			if (k == 0 && i == 0)
			{
				start = board[k + m * i];
			}

			if (start == 'B' && k==0)
			{
				if (i%2 == 0)
				{
					if (board[k + m * i] == 'W')
					{
						cout << i << " " << k << endl;
						answer++;
						board[k + m * i] = 'B';
					}
				}
				else
				{
					if (board[k + m * i] == 'B')
					{
						cout << i << " " << k << endl;
						answer++;
						board[k + m * i] = 'W';
					}
					
				}
			}
			else if(start == 'W' && k == 0)
			{
				if (i % 2 == 0)
				{
					if (board[k + m * i] == 'B')
					{
						answer++;
						board[k + m * i] = 'W';
					}
				}
				else
				{
					if(board[k + m * i] == 'W')
					{
						answer++;
						board[k + m * i] = 'B'; 
					}
				}
			}

			else if (k != 0)
			{
				if (board[0 + m * i] == 'B')
				{
					if (k % 2 == 0)
					{
						if (board[k + m * i] == 'W')
						{
							answer++;
							cout << i<<" "<< k << endl;
							//board[k + m * i] = 'B';
						}

					}
					else
					{
						if (board[k + m * i] == 'B')
						{
							answer++;
							cout << i << " " << k << endl;
							//board[k + m * i] = 'W';
						}
					}
				}
				else
				{
					if (k % 2 == 0)
					{
						if (board[k + m * i] == 'B')
						{
							answer++;
							cout << i << " " << k << endl;
							//board[k + m * i] = 'W';
						}
					}
					else
					{
						if (board[k + m * i] == 'W')
						{
							answer++;
							cout << i << " " << k << endl;
							//board[k + m * i] = 'B';
						}
					}
				}
				
			}

		}
	}
	
	cout << answer;



	return;


}