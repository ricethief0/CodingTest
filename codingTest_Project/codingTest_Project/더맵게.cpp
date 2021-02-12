#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>

using namespace std;

int solution1(vector<int> scoville,int k) 
{
    int answer = 0;
    int veryLow = 0;
    int low = 0;
    priority_queue<int,vector<int>, greater<int>> que(scoville.begin(), scoville.end());
    
    
    // 가장낮은거 + 두번째로 낮은거 *2 
    // 모든 인덱스가 k 이상이 되면 종료 
    while(1)
    {
        veryLow = que.top();
        if (veryLow >= k) break;
        if (que.size() <= 1) return -1;
        que.pop();
        low = que.top();
        que.pop();
        que.push( veryLow + low * 2);
        
        answer++;
    }

    return answer;
}
//
//int solution1(vector<int> scoville, int k)
//{
//    int answer = 0;
//    deque<int> que(scoville.begin(), scoville.end());
//    // 가장낮은거 + 두번째로 낮은거 *2 
//    // 모든 인덱스가 k 이상이 되면 종료 
//    while (1)
//    {
//        sort(scoville.begin(), scoville.end());
//        if (scoville[0] >= k) break;
//        if (scoville.size() <= 1) return -1;
//        scoville[0] = scoville[0] + scoville[1] * 2;
//        scoville.erase(scoville.begin() + 1);
//        answer++;
//    }
//
//    return answer;
//}

void 더맵게()
{
    vector<int> priority = { 1, 2, 3, 9, 10, 12 };
    int location = 7;
    
    std::cout << solution1(priority, location) << std::endl;


    std::cout << solution1({ 1, 1, 1 }, 4) << std::endl;//2
    std::cout << solution1({ 10, 10, 10, 10, 10 }, 100) << std::endl;//4
    std::cout << solution1({ 1, 2, 3, 9, 10, 12 }, 7) << std::endl;//, 2)
    std::cout << solution1({0, 2, 3, 9, 10, 12}, 7) << std::endl;//, 2)
    std::cout << solution1({0, 0, 3, 9, 10, 12}, 7) << std::endl;//, 3)
    std::cout << solution1({ 0, 0, 0, 0 }, 7) << std::endl;//, -1)
    std::cout << solution1({0, 0, 3, 9, 10, 12}, 7000) << std::endl;//, -1)
    std::cout << solution1({0, 0, 3, 9, 10, 12}, 0)<< std::endl;//, 0)
    std::cout << solution1({0, 0, 3, 9, 10, 12}, 1)<< std::endl;//, 2)
    std::cout << solution1({0, 0}, 0)<< std::endl;//, 0)
    std::cout << solution1({0, 0}, 1)<< std::endl;//, -1)
    std::cout << solution1({1, 0}, 1)<< std::endl;//, 1)
}