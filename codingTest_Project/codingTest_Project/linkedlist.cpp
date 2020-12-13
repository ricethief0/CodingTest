#include <iostream>
//Singled List
using namespace std;

template <typename T>
struct NODE {
public:
	T value;
	NODE<T>* nextNode =nullptr;
};

template <typename T>
class NODELIST  {
public:
	NODELIST(): startNode(new NODE<T>), curruntNode(new NODE<T>) {
		startNode->nextNode = curruntNode;
		}

	void Add(T value) {
		
		curruntNode->value = value;
		curruntNode->nextNode = new NODE<T>;
		curruntNode = curruntNode->nextNode;

	}

	void Print()
	{
		NODE<T>* temp = startNode->nextNode;

		while (startNode->nextNode != nullptr )
		{
			if (temp->nextNode != nullptr)
				cout << temp->value << endl;
			else
				break;

				temp = temp->nextNode;
		}
	}
private:
	NODE<T>* startNode;
	NODE<T>* curruntNode;
};


void linkedList()
{
	NODELIST<int> list;

	for (int i = 1; i < 5; i++)
	{
		list.Add(10 * i);
	}
	list.Add(100);
	list.Print();
}