#include<iostream>
using namespace std;

class Stack {
private:
	int* arr;
	int top;
	int capacity;

public:
    Stack(int size)
    {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }
    bool isEmpty()
    {
        return top == -1;
    }
    bool isFull()
    {
        return top == capacity - 1;
    }
    void push(int v1)
    {
        if (isFull())
        {
            cout << "Stack is fill" <<endl;
            return;
        }
        top++;
        arr[top] = v1;
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" <<endl;
            return -1;
        }
        int value = arr[top];
        top--;
        return value;
    }
    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return arr[top];
    }
    
};
