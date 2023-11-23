#include <iostream>

using namespace std;

int stack[50];
int top = -1;

int push(int var)
{
	stack[++top] = var;
	return 0;
}
int pop()
{

	return 0;
}
int peek()
{

	return 0;
}
bool isempty()
{
	if (top == -1)
		return true;
	else
		return false;
}


int main()
{
	int x;
	int var;
	switch (x)
	{
	case 1:
		push(var);
		break;
	case 2:
		pop();
		break;
	case 3:
		peek();
		break;
	default:
		break;
	}
}