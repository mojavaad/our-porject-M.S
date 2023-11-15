//queue linear DS.

#include <iostream>
using namespace std;

int enqueue(int, int);
int dequeue(int);
int peek();
bool isempty();
bool isfull(int);
int* reverseQ(int);

int f = -1, r = 0;
int arr[50], x;
int Count = 0;
int Max;//maxsize of queue

int main()
{
    //cout << "enter arr: "; for (int i = 0; i < 6; i++) cin >> arr[i];
    int var, Y;
    cout << "enter maxsize of queue: ";
    cin >> Max;

    while (1)
    {
        cout << "choose your case: " << endl;
        cin >> x;
        switch (x)
        {
        case 1:
            cout << "enter the element: ";
            cin >> var;
            Y = enqueue(var, Max);
            if (Y == 1)
                cout << "queue is full." << endl;
            break;
        case 2:
            var = dequeue(Max);
            cout << var << endl;
            break;
        case 3:
            var = peek();
            cout << var << endl;
            break;
        case 4:
            var = isempty();
            cout << var << endl;
            break;
        case 5:
            var = isfull(Max);
            cout << var << endl;
            break;
        case 6:
            reverseQ(Max);
            break;
        default:
            cout << "\nerror! try again." << endl;
            break;
        }
    }
}

int enqueue(int var, int Max)
{
    if (isfull(Max) == true)
        return 1;
    r++;
    if (r == Max)
        r = r % Max + 1;
    arr[r] = var;

    cout << "\nr is: " << r << endl;
    cout << "\nf is: " << f << endl;
    Count++;
    cout << Count << endl;
    return 0;
}

int dequeue(int Max)
{
    if (isempty() == true)
        return 0;
    
    f++;
    if (f == Max)
        f = f % Max + 1;

    cout << "\nr is: " << r << endl;
    cout << "\nf is: " << f << endl;
    
    Count--;
    cout << "Done. " << endl;
    return arr[f];
}

int peek()
{
    return arr[f + 1];
}

bool isempty()
{
    if (r == f+1)
        return true;
    else
        return false;
}

bool isfull(int Max)
{
    if (Count == Max-1)
        return true;
    else
        return false;
}

int* reverseQ(int Max)
{
    int* ptr;
    int j = 0;
    int k = 0;
    for (int i = 0; i < (Count / 2); i++)
    {
        cout << "\nr is: " << r << endl;
        cout << "\nf is: " << f << endl;
        if (r - i< 1)
            j = Max - 1;
        if (f + i + 1 == Max)
            k = Max - 1;
        int a = arr[f + i + 1 - k];
        arr[f + i + 1 - k] = arr[r - i + j];
        arr[r - i + j] = a;
    }
    cout << Count << "\n\n\n" << endl;
    j = f;
    for (int i = 0; i < Count; i++)
    {
        cout << arr[j++] << " ";
        if (j == Max)
        {
            j = j % Max;
            j++;
        }
        
    }
    ptr = &arr[0];
    return ptr;
}