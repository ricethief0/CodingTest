//#include <string>
//#include <vector>
//#include <queue>
//#include <deque>
//#include <iostream>
//using namespace std;
//
//int 소수찾기1(string numbers) {
//    int answer = 0;
//    int maxLangth = numbers.size()+1;
//    int curruntLangth = 0;
//    
//    vector<int> paperPiece;
//    for (char i : numbers)
//    {
//        int a = atoi(&i);
//        paperPiece.emplace_back(a);
//        if (Check(a)) answer++;
//
//    }
//
//    while (curruntLangth != maxLangth)
//    {
//        
//    }
//   
//
//    
//    return answer;
//}
//
//bool Check(int n)
//{
//    int i = 0;
//    int last = n / 2;   //약수가 없는 수가 소수이므로 2부터 n/2(자기자신/2)까지만 확인하면 됨
//    if (n <= 1)//소수는 1보다 큰 자연수여야 함
//    {
//        return false;
//    }
//    //(자기자신/2)보다 큰수는 약수가 될 수 없음
//    for (i = 2; i <= last; i++) //i를 2부터 last까지 1씩 증가시키며 반복 수행
//    {
//        if ((n % i) == 0) //n을 i로 나누었을때 나머지가 0이면(즉, i는 n의 약수가 아님)
//        {
//            return false; //소수가 아니므로 0반환(i가 약수이므로 n은 소수가 아님)
//        }
//    }
//    return true; //1~last(자기자신/2)사이에 약수가 없으므로 소수임
//}
//
//void 소수찾기2()
//{
//    string paper = "17";
//    std::cout << 소수찾기1(paper) << std::endl;
//}