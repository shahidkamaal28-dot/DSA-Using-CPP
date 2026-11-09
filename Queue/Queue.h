#include<iostream>
using namespace std;

class Queue {
	int* arr;
	int front;
	int rear;
	int capacity;
public:
	Queue(int size) {
		capacity = size;
		arr = new int[size];
		front = 0;
		rear = -1;
	}
	bool isEmpty()
	{
		return front > rear;
	}
	bool isFull()
	{
		return rear == capacity;
	}
	void enqueue(int v1)
	{
		if (isFull())
		{
			cout << "Error" << endl;
			
		}
		rear ++;
		arr[rear] = v1;
	}
	int dequeue()
	{
		if (isEmpty())
		{
			cout << "Error!" << endl;
			return -1;
		}
		front++;
		int value = arr[front];
		
		return value;
	}
	int Front()
	{
		
		return arr[front];
	}
	void display()

	{
		for (int i = front; i <= rear; i++)
		{
			 cout<< arr[i]<< " ";
		}
	}
};
