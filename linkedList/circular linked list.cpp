#include <iostream>
using namespace std;

struct node
{
    int data = 0;
    node* key;
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
        int data = 2;
        int index = 1;
        switch (x)
        {
        case 1:
            
            insertAtIndex(data, index);
            break;
        case 2:
            //int data = 2;
            insertAtEnd(data);
            break;
        case 3:
            ///int data = 3;
            //int index = 2;
            updateNode(data, index);
            break;
        case 4:
            //int index = 3;
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
            exit(0);
            break;
        }
    }


}

void insertAtIndex(int data, int index)
{
}

void insertAtEnd(int data)
{
}

void insertAtBegin(int data)
{
}

void updateNode(int data, int index)
{
}

int removeNodeAtIndex(int index)
{
    node* p = head;
    p->key;

    int i = 1;
    int data;

    do
    {
        if (index == i + 1)
        {
            data = p->key->data;
            p->key = p->key->key;
            return data;
        }
        i++;
        p->key;
    } while (p->key != head);
}

int removeNodeAtEnd()
{
    node* p = head;
    int i = 0;
    int data;
    do
    {
        if (p->key->key == head)
        {
            data = p->key->data;
            p->key = head;
            return data;
        }
        i++;
        p->key;
    } while (p->key != head);
}

int removeNodeAtBegin()
{
    int data;
    data = head->data;
    head = head->key;
    return data;
}

int sizeOfList()
{
    node* p = head;
    int i = 0;

    if (p->key == head)
        return i;
    do
    {
        p->key;
        i++;
    } while (p->key != head);

    return i;
}

void concatenate(node* headTwo)
{
    node* p = head;

    while (p->key != head)
        p = p->key;
    p->key = headTwo;
}

void invert()
{
    node* temp = head;
    node* prev = head, * next = head;

    while (temp->key != head)
    {
        next = temp->key;

        temp->key = prev;

        prev = temp;
        temp = next;
    }
    head = prev;
}