#include <iostream>
using namespace std;

struct node
{
    int data = 0;
    node* next = NULL;
};
node* head = NULL;

void insert(int, int);
int Delete(int);
int find(int);

void insertAtIndex(int data, int index)
{
    int i = 0;
    node* p = head;
    node* temp = NULL;
    for (node* p = head; p != NULL; p->next)
    {
        p = p->next;
        if (index == i)
        {
            temp->next = p->next;
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
            p->next = temp;
        }
    }
}

void insertAtBegin(int data)
{
    node* temp = NULL;
    temp->data = data;
    temp->next = head;
    head = temp;
}

int removeNodeAtIndex(int index)
{
    int i = 0;
    int data;

    for (node* p = head; p != NULL; p->next)
    {
        if (index == i + 1)
        {
            data = p->next->data;
            p->next = p->next->next;
            return data;
        }

        i++;
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


int main()
{
    int x, A;
    int data = 1;
    int index = 1;
    while (1)
    {
        cin >> x;
        switch (x)
        {
        case 1:
            insert(data, index);
            break;
        case 2:
            A = Delete(index); // A is data of index
            break;
        case 3:
            A = find(data);// A is index of data
            break;
        default:
            break;
        }
    }


}

void insert(int index, int data)
{
    if (index == 0)
        insertAtBegin(data);
    else if (index > 0 && index < sizeOfList())
        insertAtIndex(data, index);
    else if (index == sizeOfList())
        insertAtEnd(data);
}

int Delete(int index)
{
    int data;
    if (index == 0)
        data = removeNodeAtBegin();
    else if (index > 0 && index < sizeOfList())
        data = removeNodeAtIndex(index);
    else if (index == sizeOfList())
        data = removeNodeAtEnd();
    return data;
}

int find(int data)
{
    int i = 0;
    for (node* temp = head; temp != NULL; temp->next)
    {
        if (temp->data == data)
            return i;
        i++;
    }
    return -1;
}
