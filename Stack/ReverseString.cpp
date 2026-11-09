#include<iostream>
using namespace std;

#include"Stack.h"
#include<stack>

int main()
{
	Stack s1(100);
	string str;
	cout << "Enter a string" << endl;
	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		s1.push(str[i]);
	}
	cout << "Reversed string" << endl;
	while (!s1.isEmpty())
	{
		char ch = (char)s1.pop();
		cout << ch;
	}
	cout << endl;
	return 0;
}