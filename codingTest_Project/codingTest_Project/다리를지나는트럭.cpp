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
//                    truck.distance = curruntMoving[moveTruckCount - 1].length; // �ǵڿ� ������ ���� �������� ���� ���¶��? ���Ͻ��� �˼�����
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

    //truck_weights��� Ʈ�������� length�� ���̿� �ٸ��� �ǳʾ� �ϸ� weight ��ŭ�� ���� �̻����� ������ ���� ��������.
    //������ �� ������ ��������.
    //�ð��� �˷��޶�
    
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


void �ٸ�����������Ʈ��()
{
    vector<int> priority = { 2, 2, 2, 2, 1, 1, 1, 1, 1 };
    int a = 5;
    int b = 5;

    std::cout << solution2(a,b,priority) << std::endl;


   
}