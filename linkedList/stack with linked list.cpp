#include <iostream>
using namespace std;

struct node
{
    int data = 0;
    node* next = NULL;
};
node* head = NULL;

void push(int);
int pop();
bool isEmpty();
int peek();


void insertAtEnd(int data)
{
    node* p = head;
    node* temp = NULL;
    for (p; p != NULL; p->next)
    {
        if (p->next == NULL)
        {
            temp->data = data;
            p->next = temp;
        }
    }
    if (p == NULL)
    {
        p->data = data;
        head->next = p;
    }
}

int removeNodeAtEnd()
{
    int data;

    for (node* p = head; p != NULL; p->next)
    {
        if (p->next->next == NULL)
        {
            data = p->next->data;

            p->next = NULL;
            return data;
        }
    }
}

int sizeOfList()
{
    int i = 0;
    for (node* temp = head; temp != NULL; temp->next)
        i++;

    return i;
}


int main()
{
    int data = 1;
    int x, var;
    bool Bool;
    while (1)
    {
        cin >> x;
        switch (x)
        {
        case 1:
            push(data);
            break;
        case 2:
            var = pop();//value of pop() return 
            break;
        case 3:
            Bool = isEmpty(); 
            break;
        case 4:
            var = peek();// first element of stack
            break;
        }
    }
}

void push(int data)
{
    insertAtEnd(data);
}

int pop()
{
    int data;
    data = removeNodeAtEnd();
    return data;
}

bool isEmpty()
{
    if (sizeOfList() == 0)
        return true;
    return false;
}

int peek()
{
    if (head == NULL)
        return NULL;
    return head->data;
}
