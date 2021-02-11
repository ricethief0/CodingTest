#include <string>
#include <vector>
#include <iostream>

using namespace std;


int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> place;

    for (int i = 0; i < moves.size(); i++)
    {
        int num = moves[i]-1;
        int count = 0;
        int maxSize = board[0].size()-1;

        while (board[count][num] == 0)
        {
            if (maxSize == count)
                break;
            else
                count++;
        }

        int boardNum = board[count][num];

        if (boardNum == 0) continue;

        place.push_back(boardNum);
        board[count][num] = 0;

        if (place.size() > 1)
        {
            int i = place.size() - 1;
            
            if (place[i] == place[i - 1])
            {
                answer += 2;
                place.erase(place.begin() + (i-1));
                place.erase(place.begin() + (i-1));
            }
        }
    }

    return answer;
}

void 카카오인형뽑기()
{
    vector<vector<int>>board = { {0,0,0,0,0},{0,0,1,0,3},{0,2,5,0,1},{4,2,4,4,2},{3,5,1,3,1} };
    vector<int> moves = { 1, 5, 3, 5, 1, 2, 1, 4 };
    //[0,0,0,0,0],[0,0,1,0,3],[0,2,5,0,1],[4,2,4,4,2],[3,5,1,3,1]
    //vector<int> moves = { 2, 5, 3, 4, 4, 4, 4, 5,2,2,5,3,5,5, 1, 1, 2, 5,1, 4, 3, 2, 1 };
    
    std::cout<<solution(board, moves)<<"\n";
    std::cout << "end" << std::endl;
}
