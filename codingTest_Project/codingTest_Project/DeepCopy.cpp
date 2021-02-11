#pragma once
#include <iostream>


using namespace std;

//class A
//{
//public :
//	char* name;
//	int age;
//
//	A(const char& _name, int _age) : age(_age)
//	{
//		name = new char(_name);
//	}
//	/*A(A& copy)
//	{
//		name = copy.name;
//		age = copy.age;
//	}*/
//
//	void print()
//	{
//		cout << name << endl;
//		cout << age << endl;
//
//	}
//};

class A
{
public :
	int constTest(int num) const
	{
		int aa = 2;
		//aa = num;
		return aa;
	}
	
};

void ±íÀºº¹»ç()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);

	const char* str = "abcdef";

	char testStr = 'a';
	char* str1 = &testStr;


	A a;
	printf("%i", a.constTest(5));

	/*A* testA = new A("weapon", 28);

	A testB = *testA;

	testB.name = "armour";
	testA->print();
	testB.print();
	testA->print();*/

	return;

}


