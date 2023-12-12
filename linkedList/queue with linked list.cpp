#include <iostream>
using namespace std;

struct node
{
    int data = 0;
    node* next = NULL;
};
node* head;
node* headTwo;

void enqueue(int);
int dequeue();
int peek();
void reverse();
bool isEmpty();


void insertAtEnd(int data)
{
    node* temp = NULL;
    temp->data = data;
    for (node* p = head; p != NULL; p->next)
    {
        if (p->next == NULL)
            p->next = temp;
    }
}

int removeNodeAtBegin()
{
    int data;
    data = head->data;
    head = head->next;
    return data;
}

int sizeOfList()
{
    int i = 0;
    for (node* temp = head; temp != NULL; temp->next)
        i++;

    return i;
}

void invert()
{
    node* temp = head;
    node* prev = NULL, * next = NULL;

    while (temp != NULL)
    {
        next = temp->next;

        temp->next = prev;

        prev = temp;
        temp = next;
    }
    head = prev;
}


int main()
{
    int x, var, Bool;
    int data = 1;
    while (1)
    {
        cin >> x;
        switch (x)
        {
        case 1:
            enqueue(data);
            break;
        case 2:
            var = dequeue();//var is value of dequeued element
            break;
        case 3:
            var = peek(); // var is first element in queue
            break;
        case 4:
            reverse();
            break;
        case 5:
            Bool = isEmpty();//Bool is value of the func
            break;
        default:
            break;
        }
    }


}

void enqueue(int data)
{
    insertAtEnd(data);
}

int dequeue()
{
    return 0;
}

int peek()
{
    return 0;
}

void reverse()
{
    invert();
}

bool isEmpty()
{
    return true;
}
