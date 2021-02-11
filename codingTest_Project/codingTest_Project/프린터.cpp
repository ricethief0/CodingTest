#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <iostream>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 1;

    for (int i = 0; i < priorities.size() - 1; )
    {
        for (int k = i + 1; k < priorities.size(); k++)
        {
            if (priorities[i] < priorities[k]) // 뒤에 큰수가있음.
            {
                priorities.push_back(priorities[i]);
                priorities.erase(priorities.begin() + i);
                if (i == location)
                {
                    location = priorities.size() - 1;
                }
                else
                    location--;
                break;
            }
            else if (k == priorities.size() - 1) // 뒤에 큰수가 없음.
            {
                if (location == i) return answer; //뒤에 큰수가 없는 상태에서 내차례인지 확인하고 맞으면 출력 아니면 
                priorities.erase(priorities.begin() + i);
                location--;
                answer++;
            }

        }
    }
}

void 프린터()
{
    vector<int> priority = { 1, 1, 9, 1, 1, 1 };
    int location = 0;
    /*vector<int> priority = { 2, 1, 3, 2 };
    int location = 2;*/
    std::cout << solution(priority,location) << std::endl;
}