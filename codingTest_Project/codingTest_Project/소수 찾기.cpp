//#include <string>
//#include <vector>
//#include <queue>
//#include <deque>
//#include <iostream>
//using namespace std;
//
//int �Ҽ�ã��1(string numbers) {
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
//    int last = n / 2;   //����� ���� ���� �Ҽ��̹Ƿ� 2���� n/2(�ڱ��ڽ�/2)������ Ȯ���ϸ� ��
//    if (n <= 1)//�Ҽ��� 1���� ū �ڿ������� ��
//    {
//        return false;
//    }
//    //(�ڱ��ڽ�/2)���� ū���� ����� �� �� ����
//    for (i = 2; i <= last; i++) //i�� 2���� last���� 1�� ������Ű�� �ݺ� ����
//    {
//        if ((n % i) == 0) //n�� i�� ���������� �������� 0�̸�(��, i�� n�� ����� �ƴ�)
//        {
//            return false; //�Ҽ��� �ƴϹǷ� 0��ȯ(i�� ����̹Ƿ� n�� �Ҽ��� �ƴ�)
//        }
//    }
//    return true; //1~last(�ڱ��ڽ�/2)���̿� ����� �����Ƿ� �Ҽ���
//}
//
//void �Ҽ�ã��2()
//{
//    string paper = "17";
//    std::cout << �Ҽ�ã��1(paper) << std::endl;
//}