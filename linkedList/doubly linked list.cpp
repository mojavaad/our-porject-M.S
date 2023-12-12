#include <iostream>
using namespace std;

struct node
{
    int data = NULL;
    node* next = NULL;
    node* prev = NULL;

};
node* head;
node* headTwo;

void insertAtIndex(int, int);
void insertAtEnd(int);
void updateNode(int, int);
int removeNodeAtIndex(int);
int removeNodeAtEnd();
int removeNodeAtBegin();
int sizeOfList();
void concatenate(node*);
void invert();


int main()
{
    while (1)
    {
        int x;
        cin >> x;
        int data = 1;
        int index = 1;
        switch (x)
        {
        case 1:

            insertAtIndex(data, index);
            break;
        case 2:
            insertAtEnd(data);
            break;
        case 3:
            updateNode(data, index);
            break;
        case 4:
            removeNodeAtIndex(index);
            break;
        case 5:
            removeNodeAtEnd();
            break;
        case 6:
            removeNodeAtBegin();
            break;
        case 7:
            sizeOfList();
            break;
        case 8:
            concatenate(headTwo);
        case 9:
            invert();
            break;
        default:
            break;
        }
    }


}

void insertAtIndex(int data, int index)
{
    int i = 0;
    node* p = head;
    node* temp = NULL;
    for (node* p = head; p != NULL; p->next)
    {
        p = p->next;

        if (index - 1 == i)
        {
            temp->next = p->next;
            temp->prev = p->next->prev;
            p->next->prev = temp;
            p->next = temp;
            temp->data = data;
            break;
        }
        i++;
    }
}

void insertAtEnd(int data)
{
    node* temp = NULL;
    for (node* p = head; p != NULL; p->next)
    {
        if (p->next == NULL)
        {
            temp->data = data;
            temp->prev = p;
            p->next = temp;
            temp->next = NULL;
        }
    }
}

void insertAtBegin(int data)
{
    node* temp = NULL;
    temp->data = data;
    temp->prev = NULL;
    temp->next = head;
    head = temp;
}

void updateNode(int data, int index)
{
    int i = 0;

    for (node* p = head; p != NULL; p->next)
    {
        if (index == i)
            p->data = data;

        i++;
    }
}

int removeNodeAtIndex(int index)
{
    int i = 0;
    int data;

    for (node* p = head; p != NULL; p->next)
    {
        if (index - 1 == i)
        {
            data = p->next->data;
            p->next = p->next->next;
            p->next->prev = p;
            return data;
        }

        i++;
    }
}

int removeNodeAtEnd()
{
}

int removeNodeAtBegin()
{
}

int sizeOfList()
{
}

void concatenate(node* headTwo)
{
}

void invert()
{
}

