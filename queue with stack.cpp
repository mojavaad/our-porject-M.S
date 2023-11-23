#include <iostream>
using namespace std;

int stack[50];
int stack2[50];
int top = -1;
int top2 = -1;
int var;

bool isempty()
{
	if (top == -1)
		return true;
	else
		return false;
}
void push(int var)
{
	stack[++top] = var;
}
int pop()
{
	if (isempty() == true)
		return 0;

	int value = stack[top];
	top--;
	return value;
}
void push2(int var)
{
	stack2[++top2] = var;
}
int pop2()
{
	if (isempty() == true)
		return 0;

	int value = stack2[top];
	top2--;
	return value;
}



void enqueue(int var)
{
	push(var);
}
int dequeue()
{
	int len = top;
	for (int i = 0; i < len; i++)
	{
		var = pop();
		push2(var);
	}

	int value = pop();//top == 0 -> first element pop

	for (int i = 0; i < len; i++)
	{
		var = pop2();
		push(var);
	}
	return value;
}


int main()
{
	int x;
    while (1)
    {
        cout << "choose your case: " << endl;
        cin >> x;
        switch (x)
        {
        case 1:
            cout << "enter the element: ";
            cin >> var;
            enqueue(var);
            break;
        case 2:
            var = dequeue();
            cout << var << endl;
            break;
        default:
            cout << "\nerror! try again." << endl;
            break;
        }
    }
}
