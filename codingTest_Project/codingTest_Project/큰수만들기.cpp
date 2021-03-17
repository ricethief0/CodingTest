#include <string>
#include <vector>
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

#define ZERO 48

void ���̵ɶ�����(int n, int k)
{
    int answer = 0;
    
    while (1)
    {
        int target = n % k;
        answer += target;
        n -= target;
        
        if (n <= 0)
            break;

        n /= k;
        answer++;
    }
    answer--;
    printf("%d", answer);
    
}

void ���ϱ�Ȥ�����ϱ�(const string n)
{
    int answer = n[0]-ZERO;
    
    
    for (int i = 1; i < n.size(); i++)
    {
        int num = n[i] - ZERO;
        if (num < 2 || answer <2)
        {
            answer += num;
        }
        else
        {
            answer *= num;
        }
    }
    printf("%d", answer);
    
}

void ���谡���(int p, vector<int> s)
{
    int team = 0;
    int currunt = 0;
    sort(s.begin(), s.end());
    for(int i=0; i<s.size();i++)
    {
        currunt++;

        if (s[i] <= currunt)
        {
            team++;
            currunt = 0;
        }
    }

    printf("%d", team);
    
}

string ū�������1(string number, int k) {
    string answer = "";
    char cnt = 0;
    int index = 0;
    
    for (k; k < number.size(); k++)
    {
        for (int i = index; i <= k; i++)
        {
            if (number[i] > cnt)
            {
                cnt = number[i];
                index = i + 1;
            }
        }

        answer += cnt;
        cnt = 0;
    }
    
    return answer;
}

struct tagPoint
{
    int x, y;
};
void �����¿�(int space, vector<char> place)
{
    tagPoint pt = { 0,0 };
    
    for (int i = 0; i < place.size(); i++)
    {
        switch (place[i])
        {
        case'U':
            if (pt.x == 0)continue;
            pt.x--;
            break;
        case 'D':
            if (pt.x == space)continue;
            pt.x++;
            break;
        case 'L':
            if (pt.y == 0)continue;
            pt.y--;
            break;
        case 'R':
            if (pt.y == space)continue;
            pt.y++;
            break;
        }
    }
    printf("%d, %d", pt.x + 1, pt.y + 1);
}


void ū�������()
{
    //���̵ɶ�����(25, 3);
    //���ϱ�Ȥ�����ϱ�("567");
    //���谡���(5, { 2,3,1,2,2 });
    //cout<<ū�������1("1924",2);
    //cout<<ū�������1("1231234",3);
    //cout<<ū�������1("4177252841",4);
    �����¿�(5, { 'R','R','R','U','D','D' });
 
}