#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <iostream>

using namespace std;

//struct tagTruck {
//    int weight=0;
//    int length=0;
//    int distance = 0;
//};
//
//int solution2(int bridge_length, int weight, vector<int> truck_weights) {
//    int answer = 0;
//  
//    int curruntWeight = 0;
//    deque<int> start(truck_weights.begin(), truck_weights.end());
//    queue<int> end;
//    deque<tagTruck> curruntMoving;
//    int finished = start.size();
//
//    while (1)
//    {
//        int moveTruckCount = curruntMoving.size();
//        if(moveTruckCount >0 )
//        {
//            curruntMoving[0].length++;
//
//            if (curruntMoving[0].length >= bridge_length)
//            {
//                end.push(0);
//                curruntWeight -= curruntMoving[0].weight;
//                curruntMoving.pop_front();
//                moveTruckCount = curruntMoving.size();
//                if (moveTruckCount > 0)
//                curruntMoving[0].length = bridge_length - curruntMoving[0].distance;
//            }
//        }
//        if (start.size() != 0)
//        {
//            tagTruck truck;
//            truck.weight = start.front();
//            curruntWeight += truck.weight;
//            if (weight >= curruntWeight)
//            {
//                if(moveTruckCount >0)
//                    truck.distance = curruntMoving[moveTruckCount - 1].length; // 맨뒤에 렝스가 아직 정해지지 않은 상태라면? 디스턴스를 알수없음
//
//                curruntMoving.emplace_back(truck);
//                
//                start.pop_front();
//
//            }
//            else
//            {
//                curruntWeight -= truck.weight;
//            }
//        }
//
//        answer++;
//        if (end.size() >= finished)
//            break;
//    }
//    return answer;
//}

struct tagTruck {
    int weight = 0;
    int length = 0;

};
int solution2(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;

    //truck_weights대기 트럭순으로 length의 길이에 다리를 건너야 하며 weight 만큼의 무게 이상으로 차량이 지나 갈수없다.
    //한턴의 한 차량만 지나간다.
    //시간을 알려달라
    
    int curruntWeight = 0;
    deque<int> start(truck_weights.begin(), truck_weights.end());
    queue<int> end;
    deque<tagTruck> curruntMoving;
    int finished = start.size();

    while (1)
    {
        for (int i = 0; i < curruntMoving.size(); )
        {
            curruntMoving[i].length++;

            if (curruntMoving[i].length >= bridge_length)
            {
                end.push(0);
                curruntWeight -= curruntMoving[i].weight;
                curruntMoving.pop_front();
            }
            else
            {
                i++;
            }

        }
        if (start.size() != 0)
        {
            tagTruck truck;
            truck.weight = start.front();
            curruntWeight += truck.weight;
            if (weight >= curruntWeight)
            {
                curruntMoving.emplace_back(truck);
                start.pop_front();

            }
            else
            {
                curruntWeight -= truck.weight;
            }
        }

        answer++;
        if (end.size() >= finished)
            break;
    }
    return answer;
}


void 다리를지나가는트럭()
{
    vector<int> priority = { 2, 2, 2, 2, 1, 1, 1, 1, 1 };
    int a = 5;
    int b = 5;

    std::cout << solution2(a,b,priority) << std::endl;


   
}