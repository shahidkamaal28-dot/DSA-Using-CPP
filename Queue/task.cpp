#include<iostream>
using namespace std;

#include"Stack.h"
#include<stack>

int main()
{
	Stack stack(5);
	stack.push(1);
	cout << stack.peek() << endl;
	cout << stack.pop()<< endl;

}
