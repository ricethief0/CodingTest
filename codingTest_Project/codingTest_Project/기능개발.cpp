#include <string>
#include <vector>
#include <iostream>

using namespace std;

#include <string>
#include <vector>

using namespace std;


vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;

    int oldDay = 0;

    for (int i = 0; i < progresses.size(); i++)
    {
        int progress = progresses[i];
        int day = 0;

        day = (99 - progress) / speeds[i] + 1;

        if (i == 0 || day > oldDay)
        {
            oldDay = day;
            answer.push_back(1);
        }
        else
        {
            answer.back()++;
        }
    }

    return answer;
}


//
//vector<int> solution(vector<int> progresses, vector<int> speeds) {
//    vector<int> answer;
//    
//    int oldDay = 0;
//    int count = 0;
//    
//    for (int i = 0; i < progresses.size(); i++)
//    {
//        int progress = progresses[i];
//        int day = 0;
//        while (progress < 100)
//        {
//            progress += speeds[i];
//            day++;
//        }
//        if (i == 0)
//        {
//            oldDay = day;
//            count++;
//        }
//        
//        else if (day > oldDay)
//        {
//            oldDay = day;
//            answer.push_back(count);
//            count = 1;
//            if (i == progresses.size() - 1)
//            {
//               answer.push_back(count);
//            }
//        }
//        else if (i == progresses.size() - 1)
//        {
//            count++;
//            answer.push_back(count);
//        }
//        else
//            count++;
//    }
//    
//    return answer;
//}


void 기능개발()
{
    vector<int> progresses = { 99, 90, 99, 99, 80, 99 };
    vector<int> speeds = { 1, 1, 1, 1, 1, 1 };

    /*vector<int> progresses = { 93, 30, 55 };
    vector<int> speeds = { 1, 30, 5 };*/
   
    vector<int> sol = solution(progresses, speeds) ;
    for (int i = 0; i < sol.size(); i++)
    {
        std::cout << sol[i] << std::endl;
    }
}