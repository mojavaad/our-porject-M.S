//queue linear DS.

#include <iostream>
using namespace std;

int enqueue(int);
int dequeue();
int peek();
bool isempty();
bool isfull();
int *reverseQ();

int f = -1, r = -1;
int arr[6], x;
int Count = 0;
//int Max;//maxsize of queue

int main()
{
    //cout << "enter arr: "; for (int i = 0; i < 6; i++) cin >> arr[i];
    int var;
    //cout << "enter maxsize of queue: ";
    //cin >> Max;

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
        case 3:
            var = peek();
            cout << var << endl;
            break;
        case 4:
            isempty();
            break;
        case 5:
            isfull();
            break;
        case 6:
            reverseQ();
            for (int i = 0; i < Count; i++)
            {

            }
            
            break;
        default:
            cout << "\nerror! try again." << endl;
            break;
        }
    }
}

int enqueue(int var)
{
    if (isfull() == true)
        return 0;

    r++;
    arr[r] = var;

    cout << "\nr is: " << r << endl;
    cout << "\nf is: " << f << endl;
    Count++;
    cout << Count << endl;
    return 0;
}

int dequeue()
{
    int object;
    if (isempty() == true)
        return 0;
    f++;
    object = arr[f];
    cout << "\nr is: " << r << endl;
    cout << "\nf is: " << f << endl;
    Count--;
    
    cout << "Done. " << endl;
    return object;
}

int peek()
{
    return arr[f + 1];
}

bool isempty()
{
    if (r == f)
        return true;
    else
        return false;
}

bool isfull()
{
    if (r + 1 == 6)
        return true;
    else
        return false;
}

int* reverseQ()
{
    int* ptr;
    for (int i = 0; i < (Count / 2); i++)
    {
        cout << "\nr is: " << r << endl;
        cout << "\nf is: " << f << endl;
        int a = arr[f + i+1];
        arr[f + i+1] = arr[r - i];
        arr[r - i] = a;
    }
    cout << Count << "\n\n\n" << endl;
    for (int i = 0; i < Count; i++)
    {
        cout << arr[i] << " ";
    }   
    ptr = &arr[0];
    return ptr;
}
